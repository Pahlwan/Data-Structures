#include<iostream>
#include "../Linked_List/LinkedList.cpp"

int main()
{
    LinkedList<int> ll;
    ll.Insert(89,0);
    ll.Insert(45,5);
    cout<<"Before delete.\n";
    cout<<ll;
    ll.Delete(1);
    cout<<"After delete.\n";
    cout<<ll;
    return 0;
}