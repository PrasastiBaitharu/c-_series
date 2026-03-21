#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Next;
    Node(int val)
    {
        data = val;
        Next = NULL;
    }
};
class List
{
private:
    Node *head;
    Node *tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int value)
    {
        Node *NewNode = new Node(value);
        if (head == NULL)
        {
            head = tail = NewNode;
            return; // Why new node
        }
        else
        {
            NewNode->Next = head;
            //(*newnode).next
            head = NewNode;
        }
    }
    

    int search(int val){
        Node* temp = head;
        int k = 0;
        while(temp!=NULL){
            k++;
            if(temp->data == val){
                return k;
            }
            temp = temp->Next;
        }
        return -1;
    }


    void printing()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " - ";
            temp = temp->Next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    List l;
    l.push_front(1);
    l.push_front(2);
    l.push_front(3);
    l.push_front(4);
    cout<<l.search(2);
    // l.printing();
}