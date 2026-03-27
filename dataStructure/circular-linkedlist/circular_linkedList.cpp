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
            if(head==NULL){
                head = tail = newNode;
                tail->next = head;
            }
            //without head element
            // newNode->next = tail->next;
            // tail->next = newNode;
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }

        void push_back(int val){
            Node* newNode = new Node(val);
            if(head==NULL){
                head = tail = newNode;
                tail->next = newNode;
            }
            //without head element
            // newNode->next = tail->next;
            // tail->next = newNode;
            // tail = newNode;
            tail->next = newNode;
            tail = newNode;
            tail->next = head;
        }

        void push_any(int val, int pos){
            Node* newNode = new Node(val);
            if(pos<=0){
                cout<<"Position not possible";
                return;
            }
            if(head==NULL){
                head = tail = newNode;
                return;
            }            
            Node* temp = head; //tail->next
            for(int i=1 ; i<pos-1 ; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
        }

        void pop_front(){
            if(head == NULL) return;
            if(head->next == NULL){
                head=NULL;
                return;
            }
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            tail->next = head;
            delete temp;
        }

        void pop_back(){
            if(head == NULL) return;
            if(head->next == NULL){
                head=NULL;
                return;
            }
            Node* temp = head;
            while(temp->next!=tail){
                temp = temp->next;
            }
            temp->next = NULL;
            delete tail;
            tail = temp;
            tail->next = head;
        }

        void pop_any(int pos){
            if(head == NULL) return;
            if(head->next == NULL){
                head=NULL;
                return;
            }
            Node* temp =head;
            Node* deleteNode = head;
            for(int i=1 ; i<pos ; i++){
                deleteNode = deleteNode->next;
            }
            for(int i=1 ; i<pos-1 ; i++){
                temp = temp->next;
            }
            temp->next = deleteNode->next;
            deleteNode->next = NULL;
            delete deleteNode;

        }

        void printLL(){
            if(head == NULL) return;

            cout<<head->data<<"->";
            Node* temp = head->next;

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
    ll.push_front(30);
    ll.push_back(40);
    ll.push_any(50,3);
    ll.pop_front();
    ll.pop_back();
    ll.pop_any(2);
    ll.printLL();
}