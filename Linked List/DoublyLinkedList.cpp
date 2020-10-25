#include<iostream>

using namespace std;
class Node
{
public:
    int item;
    Node *next;
    Node *previous;

    Node(){}
    Node(int value,Node *n,Node *p)
    {
        item = value;
        next = n;
        previous = p;
    }
};

class DoublyLinkedList
{
    Node * Head;
    Node * Tail;
    int size;
public:
    DoublyLinkedList()
    {
        Head = NULL;
        Tail = NULL;
        size = 0;
    }

    void Insert(int value,int pos)
    {
        Node *temp = new Node(value,NULL,NULL);
        Node *pre;
        if(Head == NULL )
        {
            Head = temp;
            Tail = temp;
            size++;
            return;
        }
        if(pos == 0)
        {
            temp->next = Head;
            Head = temp;
            size++;
        }
        else
        {
            Node * Iter = Head;
            while(pos!=0 && Iter!=NULL)
            {
                pre = Iter;
                Iter = Iter->next;
                pos--;
            }
            if(Iter==NULL)
            {
                if(pos!=0)
                    cout<<"Pos is out of range.";
                temp->next = pre->next;
                pre->next = temp;
                size++;
            }
            else
            {
                temp->previous = pre;
                temp->next = Iter;
                pre->next = temp;
                Iter->previous = temp;
                size++;
            }
            
        }
        
    }

    int Size()
    {
        return size;
    }

    friend ostream& operator <<(ostream& dout,DoublyLinkedList& dll);
};

ostream& operator <<(ostream& dout,DoublyLinkedList& dll)
{
    Node * Iter = dll.Head;
    dout<<"<";
    while(Iter!=NULL)
    {
        dout<<Iter->item;
        Iter = Iter->next;
        if(Iter!=NULL)
            dout<<",";
    }
    dout<<">\n";
    return dout;
}
