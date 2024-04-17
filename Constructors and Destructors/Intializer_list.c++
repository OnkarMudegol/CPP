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
    Rectangle(int length,int breadth):l(length),b(breadth)
    {
        cout<<"The length is: "<<l<<" units."<<endl;
        cout<<"The breadth is: "<<b<<" units."<<endl;
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
    r1.area();
    cout<<"Enter the length of the rectangle: "<<endl;
    cin>>len;
    cout<<"Enter the breadth of the rectangle: "<<endl;
    cin>>bred;
    Rectangle r2(len,bred);
    r2.area();
    return 0;
}