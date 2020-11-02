#include<iostream>
#include "../Stacks/Array_Stack.cpp"

using namespace std;
int main()
{
    Stack s(4);
    s.push(10);
    s.push(45);
    s.push(67);
    s.push(10);
    s.push(45);
   
    cout<<s.pull()<<endl;
    cout<<s.pull()<<endl;
    cout<<s.pull()<<endl;
    cout<<s.pull()<<endl;
    cout<<s.pull()<<endl;
}