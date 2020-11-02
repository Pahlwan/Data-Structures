#include<iostream>

using namespace std;

class Node
{
public:
    int item;
    Node *next;
};

class Stack
{
    Node *Top;
public:
    Stack()
    {
        Top = NULL;
    }

    void push(int value)
    {
        
        Node* temp = new Node;
        if(!temp)
        {
            cout<<"Overflow.\n";
            return;
        }
        temp->item = value;
        temp->next = Top;
        Top = temp;

    }

    int pull()
    {
        if(Top == NULL)
        {
            cout<<"Underflow.\n";
            return NULL;
        }
        int ret = Top->item;
        Top = Top->next;
        return ret;
    }

};

