#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length,breadth;
    Rectangle()
    {
        length=10;
        breadth=20;
    }
    void area()
    {
        cout<<"The area is: "<<length*breadth<<" sq units.";
    }
};
int main()
{
    Rectangle r1;
    r1.area();
}