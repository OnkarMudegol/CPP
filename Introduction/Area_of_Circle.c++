// WAP in C++ to calculate the area of a circle
#include<iostream>
using namespace std;

class Circle{
    public:
    double radius;
    double compute_area()
    {
        return radius*radius*3.14;
    }
};
int main()
{
    Circle obj;
    obj.radius=5.5;
    cout<<"The radius is:"<<obj.radius;
    cout<<"\nThe area is:"<<obj.compute_area();
    return 0;

}