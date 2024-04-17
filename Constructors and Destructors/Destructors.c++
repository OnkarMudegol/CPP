 #include<iostream>
 using namespace std;
 class Counter
 {
     int id;
     public:
     Counter(int i)
     {
         id=i;
         cout<<"The id is: "<<id<<endl;
     }
     ~Counter()
     {
         cout<<"The destructor id is: "<<id<<endl;
     }
 };
 int main()
 {
     Counter c1(10);
     Counter c2(20);
     Counter c3(30);
     return 0;
 }

