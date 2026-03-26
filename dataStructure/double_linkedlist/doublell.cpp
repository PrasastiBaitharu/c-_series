#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};

class LinkedList
{
private:
    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    void push_any(int val, int pos){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
        }
        Node* temp = head;
        for(int i=1 ; i<pos-1 ; i++){
            temp = temp->next;
        }
        newNode->next = temp->next;
        temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }

    void pop_any(int pos){
        if(head==NULL){
            cout<<"Linked list is empty";
            return;
        }
        if(head->next == NULL){
            // delete head;
            head = NULL;
            return;
        }
        Node* temp = head;
        Node* deleteNode = head;
        for(int i=1 ; i<pos-1 ; i++){
            temp = temp->next;
        }
        for(int i=1; i<pos; i++){
            deleteNode = deleteNode->next;
        }
        deleteNode->next->prev = temp;
        temp->next = deleteNode->next;
        deleteNode->next = NULL;
        deleteNode->prev = NULL;
        delete deleteNode;
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "Doubly linked list doesn't exist\n";
            return;
        }

        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;            
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL)
        {
            cout << "Doubly linked list doesn't exits";
            return;
        }
        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }
        Node *temp = head;
        Node *deleteNode = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        while(deleteNode->next != NULL){
            deleteNode = deleteNode->next;
        }
        deleteNode->prev = NULL;
        temp->next = NULL;
        delete deleteNode;
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newNode->prev = temp;
        temp->next = newNode;
    }

    void printll()
    {
        Node *temp = head;

        if (head == NULL)
        {
            cout << "List is empty\n";
            return;
        }

        while (temp != NULL)
        {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }
};

int main()
{
    LinkedList ll;
    ll.push_front(10);
    ll.push_front(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_any(50,3);
    ll.printll();
    // ll.pop_any(2);
    ll.pop_front();
    // ll.pop_back();
    ll.printll();
}