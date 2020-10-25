#include<iostream>

using namespace std;
template<class T>
class Node
{
public:
    T item;
    Node *next;
    Node(){}
    Node(T value,Node *n)
    {
        item = value;
        next = n;
    }
};

template<class T>
class LinkedList:public Node<T>
{
    Node<T> *Head;
    int size;
public:
    LinkedList():Node<T>()
    {
        Head = NULL;
        size = 0;
    }

    void Insert(T value, int pos )
    {
        Node<T> *temp = new Node<T>(value,NULL);
        Node<T> * pre = Head;
        
        if(Head == NULL || pos == 0)
        {
            temp->next = Head;
            
            Head = temp;
            size++;
        }
        else
        {
            Node<T> *Iter = Head;
            while(pos !=0 && Iter != NULL)
            {
                pre = Iter;
                Iter = Iter->next;
                pos--;
            }
            
            if(Iter == NULL)
            {   if(pos!=0)
                    cout<<"Position given is out of range adding eliment at end.\n";
                temp->next = pre->next;
                pre->next = temp;
                size++;
            }
            else
            {
                temp->next = pre->next;
                pre->next = temp;
                size++;
            }
            
        }

    }

    void Delete(int pos)
    {
        Node<T>* pre;
        Node<T>* cur = Head;
        if(Head==NULL)
        {
            cout<<"List is empty.\n";
        }
        if(pos == 0)
        {
            Head = Head->next;
            return;
        }
        while(pos!=0 && cur!=NULL)
        {
            pre = cur;
            cur = cur->next;
            pos--;
        }
        if(cur==NULL)
        {
            cout<<"Index out of range.";
            return;
        }
        else
        {
            pre->next = cur->next;
        }
        
    }

    template<class U>
    friend ostream & operator <<(ostream & dout,LinkedList<U> & ll);
    

    int Size()
    {
        return size;
    }
};

template<class T>
ostream& operator <<(ostream & dout,LinkedList<T>& ll)
{
    Node<T> * Iter = ll.Head;
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

