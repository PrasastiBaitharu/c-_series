#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int val){
            data = val;
            next = NULL;
            prev = NULL;
        }
};

class LinkedList{
    private:
        Node* head;
        Node* tail;
    
    public:
        LinkedList(){
            head = tail = NULL;
        }

        void push_front(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                newNode->next = newNode;
                newNode->prev = newNode;
                return;
            }
            newNode->next = head;
            newNode->prev = tail;
            head->prev = newNode;
            tail->next = newNode;
            head = newNode;
            

        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head == NULL){
                head = tail = newNode;
                tail->next = newNode;
                return;
            }
            newNode->next = head;
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }

        void pop_back(){
            if(head == NULL){
                return;
            }
            Node* temp = head;
            while(temp->next != tail){
                temp = temp->next;
            }
            tail->next = tail->prev = NULL;
            temp->next = head;
            head->prev = temp;//temp<->head
            delete tail;
            tail = temp;
        }

        void pop_front(){
            if(head == NULL){
                return;
            }
            Node* temp = head;

            tail->next = head->next;
            head = head->next;
            head->prev = tail;
            temp->prev = NULL;
            temp->next = NULL;
            delete temp;
        }

        void print(){
            if(head == NULL) return;
            cout<<head->data<<"->";

            Node*temp = head->next;
            while(temp!=head){
                cout<<temp->data<<"->";
                temp = temp->next;
            }
            cout<<"NULL";
        }
};

int main(){
    LinkedList ll;
    ll.push_front(10);
    ll.push_front(20);
    // ll.print();
    ll.push_back(30);
    // ll.pop_back();
    // ll.pop_front();
    ll.print();
}

