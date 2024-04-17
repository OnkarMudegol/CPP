#include<iostream>
#include<list>
using namespace std;
void display(list <int> &l)
{
    list<int>::iterator p;
    for(p=l.begin();p!=l.end();p++)
    {
        cout<<*p<<endl;
    }
}
int main()
{
    list<int> list1;
    list<int> list2(5);
    for(int i=0;i<3;i++)
    {
        list1.push_back(i);
    }
    cout<<"\n";
    cout<<"Displaying first list: ";
    display(list1);
    list<int>::iterator p;
    for(p=list2.begin();p!=list2.end();p++)
    {
        *p=1;
    }
    cout<<"\nDisplaying Second list: ";
    display(list2);
    cout<<"\n Pushing elements at front: ";
    list1.push_front(100);
    cout<<"\n Popping elements from front: ";
    list2.pop_front();
    display(list2);
    cout<<"\nSorting fisrt list: ";
    list1.sort();
    display(list1);
    cout<<"\nSorting second list: ";
    list2.sort();
    display(list2);
    cout<<"\nMerging list: ";
    list1.merge(list2);
    display(list1);
    cout<<"\nReversed fisrt list: ";
    list1.reverse();
    display(list1);
    return 0;
}