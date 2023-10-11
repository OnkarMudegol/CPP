#include<iostream>
using namespace std;
struct emp
{
    string name;
};
int main()
{
    emp e[5];
    for(int i=0;i<5;i++)
    {
        cout<<"Enter the name of the employee no."<<i+1<<":";
        cin>>e[i].name;
    }
    cout<<"\nName of all employees:\n";
    for(int i=0;i<5;i++)
    {
        cout<<e[i].name<<endl;
    }
    return 0;
}