#include<iostream>
using namespace std;
class s
{
    int roll_no;
    char name[10];
    int age;
    s *next;
    public:
    s()
    {
        next = NULL;
    }
    void get_data()
    {
        cout<<"Enter rollno, name and age: ";
        cin>>roll_no>>name>>age;
    }
    void link(s *t)
    {
        next=t;
    }
    void display()
    {
        s *p=this;
        while(p!=NULL)
        {
            cout<<"Roll no: "<<p->roll_no<<"\nName: "<<p->name<<"\nAge: "<<p->age<<endl;
            p=p->next;
        }
    }
};
int main()
{
    s o1,o2, o3;
    o1.get_data();
    o2.get_data();
    o3.get_data();
    o1.link(&o2);
    o2.link(&o3);
    o1.display();
    return 0;
}