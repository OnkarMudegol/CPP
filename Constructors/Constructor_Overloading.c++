#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int l,b;
    Rectangle()
    {
        l=0;
        b=0;
        cout<<"The vaule of lenghth are breadth are intialised to: "<<l<<" "<<b<<endl;
    }
    Rectangle(int length,int breadth)
    {
        cout<<"The length is: "<<length<<" units."<<endl;
        cout<<"The breadth is: "<<breadth<<" units."<<endl;
        cout<<"The area is: "<<length*breadth<<" sq units."<<endl;
    }
};
int main()
{
    int len,bred;
    Rectangle r1;
    cout<<"Enter the length of the rectangle: "<<endl;
    cin>>len;
    cout<<"Enter the breadth of the rectangle: "<<endl;
    cin>>bred;
    Rectangle r2(len,bred);
    return 0;
}