#include<iostream>
using namespace std;
class Test
{
    int a,b;
    public:
    void show()
    {
        a=10;
        b=20;
        cout<<"obj address="<<this<<endl;
        cout<<"a="<<this->a<<endl;
        cout<<"b="<<this->b<<endl;
    }
};
int main()
{
    Test t;
    t.show();
}