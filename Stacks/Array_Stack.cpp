#include<iostream>

using namespace std;
class Stack
{
    int capacity;
    int top;
    int *arr;

public:
    Stack(int capacity)
    {
        this->capacity = capacity;
        top = -1;
        arr = new int[this->capacity];
    }

    void push(int el)
    {
        
        if((top+1)==capacity)
        {
            std::cout<<"Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = el;
        

    }

    int pull()
    {
        if(top == -1)
        {
            std::cout<<"Underflow";
            return NULL;
        }
        return arr[top--];
        
    }

};

