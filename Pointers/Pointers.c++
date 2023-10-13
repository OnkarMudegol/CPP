#include<iostream>
using namespace std;
class Person
{
    char name[20];
    int age;
    public:
    void getdata()
    {
        cout<<"Enter name and age: ";
        cin>>name>>age;
        
    }
    void display(){
        cout<<name<<" "<<age;
    }
};
int main()
{
    Person x,*ptr;
    ptr=&x;
    ptr->getdata();
    ptr->display();
    cout<<endl;
    (*ptr).getdata();
    (*ptr).display();
    return 0;
}