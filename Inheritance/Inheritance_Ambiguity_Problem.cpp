#include<iostream>
using namespace std;
class B1
{
    public:
    void show_data()
    {
        cout<<"\nIn the base class 1";
    }
};
class B2
{
    public:
    void show_data()
    {
        cout<<"\nIn the base Class 2";
    }
};
class D : public B1, public B2
{};
int main()
{
    D obj;
    // obj.show_data();  -- Ambiguity problem
    obj.B1::show_data();
    obj.B2::show_data();
}
