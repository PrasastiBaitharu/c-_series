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
    void SpecificPosition(int value, int position)
    {
        if(position<0){
            cout<<"Invalid position";
            return;
        }
        if (position == 0)
        {
            push_front(value);
            return;
        }
        Node *NewNode = new Node(value);
        Node *temp = head;
        for (int i = 1; i < position - 1; i++)
        {
            if(temp==NULL){
                cout<<"Invalid position";
                return;
            }
            temp = temp->Next;
        }
        
        NewNode->Next = temp->Next;
        temp->Next = NewNode;
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
    l.SpecificPosition(12, 3);
    l.printing();
}