#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;
    
    public:
    List(){
        head = tail = NULL;
    }
    void push_back(int val){
        Node* newNode = new Node(val);//Dynamic memory allocation 
        if(head==NULL){
            head = tail = newNode;
            return;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_back(){
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    List ll;
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.printLL();
    ll.pop_back();
    ll.printLL();
}