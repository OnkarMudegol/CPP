// #include<iostream>
// using namespace std;
// class abc
// {
//     private:
//     int x,y,z;
//     public:
//     abc(int a,int b, int c)
//     {
//         x=a;
//         y=b;
//         z=c;
//     }
//     void display()
//     {
//         cout<<x<<" "<<y<<" "<<z<<endl;
//     }
//     void operator-()
//     {
//         x=-x;
//         y=-y;
//         z=-z;
//     }
// };
// int main()
// {
//     abc s(10,-20,30);
//     cout<<"s: ";
//     s.display();
//     -s;
//     cout<<"-s: ";
//     s.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;
// class Sum
// {
//     public:
//     int b,a;
//     Sum()
//     {
//         b=50;
//     }
//     void set_data()
//     {
//         cout<<"Enter a: ";
//         cin>>a;
//     }
//     int operator +(Sum s1)
//     {
//         return(a+s1.b);
//     }
// };
// int main()
// {
//   int d;
//   Sum s,t;
//   s.set_data();
//   d=s+t;
//   cout<<"Sum is: "<<d;
//   return 0;
// }

#include<iostream>
using namespace std;

class complex {
    int x, y;
public:
    complex() {
        x = 10;
        y = 20;
    }

    complex(int a, int b) {
        x = a;
        y = b;
    }

    complex operator +(complex c) {
        complex temp;
        temp.x = x + c.x;
        temp.y = y + c.y;
        return temp;
    }

    void show() {
        cout << x << "+i" << y;
    }
};

int main() {
    complex C1(2, 3), C2(4, 5), C3;
    C3 = C1 + C2;
    C3.show();
    return 0;  
}
