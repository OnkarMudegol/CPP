#include<iostream>
using namespace std;
class A
{
    int x;
    public:
    A(int a)
    {
        x=a;
        cout<<"Calling default base constructor.."<<endl;
    }
    ~A()
    {
        cout<<"Calling default base destructor.."<<endl;
    }
};
class B : public A{
    int z;
    public:
    B(int b):A(b)
    {
        z=b;
        cout<<"Calling default derived constructor.."<<endl;
    }
    ~B()
    {
        cout<<"Calling default derived destructor.."<<endl;
    }
};
int main()
{
    B obj1(10);
    return 0;
}