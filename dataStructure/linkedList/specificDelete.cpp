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
            return;
        }
        else
        {
            NewNode->Next = head;
            //(*newnode).next
            head = NewNode;
        }
    }
    void DeleteSpecificPosition(int position)
    {
        if(position<0){
            cout<<"Invalid position";
            return;
        }
        if(head->Next==NULL){
            head=NULL;
            return;
        }
        
        Node *temp = head;
        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->Next;
        }
        Node* deleteNode = temp->Next;
        temp->Next = temp->Next->Next;
        delete deleteNode;

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
    l.push_front(5);
    l.push_front(6);
    l.push_front(7);
    l.push_front(10);
    l.DeleteSpecificPosition(3);
    l.printing();
}