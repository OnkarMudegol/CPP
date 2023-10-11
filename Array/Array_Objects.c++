#include<iostream>
#include<conio.h>
using namespace std;
class Emp
{
    char name[10];
    int age;
    public:
    void getdata(void);
    void putdata(void);
};
void Emp::getdata(void)
{
    cout<<"\n Enter the name of Employee:";
    cin>>name;
    cout<<"\n Enter the age of Employee:";
    cin>>age;
}
void Emp::putdata(void)
{
    cout<<"\n Entered name is:";
    cout<<"\n Entered age is:";
}
