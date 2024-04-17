#include<iostream>
using namespace std;
class BC
{
    public:
    virtual void show()
    {
        cout<<"show() of base class"<<endl;
    }
};
class DC : public BC{
    public:
    void show()
    {
        cout<<"show() of derived class"<<endl;
    }
};
int main()
{
    BC *bptr;
    BC base;
    bptr=&base;
    cout<<"-----Runtime Polymorphism-----"<<endl;
    cout<<"bptr points to base objects"<<endl;
    bptr->show(); //base class show is called
    //derived class 
    DC derived;
    bptr=&derived;
    cout<<"bptr now points to derived object"<<endl; //derived class show is called 
    bptr->show();
    return 0;
}