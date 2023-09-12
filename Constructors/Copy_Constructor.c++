#include<iostream>
using namespace std;
class Rectangle
{
    int l,b;
    public:
    Rectangle()
    {
        l=0;
        b=0;
        cout<<"The vaule of lenghth are breadth are intialised to: "<<l<<" "<<b<<endl;
    }
    Rectangle(int length,int breadth)
    {
        l=length;
        b=breadth;
    }
    Rectangle(Rectangle &obj)
    {
        cout<<"Copy constructor invoked"<<endl;
        cout<<"The length is: "<<obj.l<<" units."<<endl;
        cout<<"The breadth is: "<<obj.b<<" units."<<endl;
        obj.area();
    }
    int area()
    {
        cout<<"The area is: "<<l*b<<" sq units."<<endl;
    }
};
int main()
{
    int len,bred;
    Rectangle r1;
    Rectangle r3(r1);
    cout<<"Enter the length of the rectangle: "<<endl;
    cin>>len;
    cout<<"Enter the breadth of the rectangle: "<<endl;
    cin>>bred;
    Rectangle r2(len,bred);
    Rectangle r4(r2);
    return 0;
}