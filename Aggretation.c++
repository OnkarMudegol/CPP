#include<iostream>
using namespace std;
class emp
{
    public:
    emp()
    {
        cout<<"I am an Employee."<<endl;
    }
    ~emp()
    {
        cout<<"Employee destroyrd."<<endl;
    }
};
class company
{
    public:
    emp *empl;
    //Company has an employee
    company( emp *empl)
    {
        this->empl=empl;
        cout<<"This is a company"<<endl;
        cout<<this->empl;
    }
    ~company()
    {
        cout<<"Company destroyed."<<endl;
    }
};
int main()
{
    emp *e1 = new emp;
    company c1(e1);
}