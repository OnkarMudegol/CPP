#include<iostream>
using namespace std;
class Engine
{
    public:
    Engine()
    {
    cout<<"I am engine."<<endl;
    }
    ~Engine()
    {
        cout<<"Engine destroyed."<<endl;
    }
};
class Car
{
    public:
    Car()
    {
        cout<<"This is a Car."<<endl;
    }
    ~Car()
    {
        cout<<"Car destroyed."<<endl;
    }
};
int main()
{
    Car C;
    return 0;
}

