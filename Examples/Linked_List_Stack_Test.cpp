#include<iostream>

using namespace std;
#include "../Stacks/Linked_List_Stack.cpp"
int main()
{
    Stack st;
    st.push(45);
    st.push(56);
    cout<<st.pull();
    cout<<st.pull();
    cout<<st.pull();
}