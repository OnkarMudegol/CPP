// #include<iostream>
// using namespace std;
// class Test
// {
//     int a,b;
//     public:
//     void show(int a, int b)
//     {
//         this->a=a;
//         this->b=b;
//     }
//     void display()
//     {
//         cout<<a<<endl<<b;
//     }
// };
// int main()
// {
//     Test t;
//     t.show(10,20);
//     t.display();
// }

//Wap to take input of two rectangles dimensions and calculate and compare their dimensions. Make sure to use this pointer operator.
#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int len,bred,area;
    void get()
    {
        cout<<"Enter the length and breadth of the rectangle: ";
        cin>>this->len>>this->bred;
    }
    void AreaRectangle()
    {
        this->area=this->len*this->bred;
        cout<<"The area of the rectangle is: "<<this->area<<" sq units."<<endl;
    }
};
int main()
{
    Rectangle rectangle;
    rectangle.get();
    rectangle.AreaRectangle();
    Rectangle rectangle1;
    rectangle1.get();
    rectangle1.AreaRectangle();
    if(rectangle1.len==rectangle.len and rectangle1.bred==rectangle.bred)
    {
        cout<<"Both the rectangles have same dimensions.";
    }
    else
    {
        cout<<"Both the rectangles have different dimensions.";
    }
    return 0;
}          