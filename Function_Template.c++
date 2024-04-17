// #include<iostream>
// using namespace std;
// template <class T>  
// T square(T num)
// {
//     return (num*num);
// }
// int main()
// {
//     int num1=3;
//     cout<<"Square of "<<num1<<" is: "<<square<int>(num1)<<endl;
//     float num2=5.6;
//     cout<<"Square of "<<num2<<" is: "<<square<float>(num2)<<endl;
//     double num3=123.456;
//     cout<<"Square of "<<num3<<" is: "<<square<double>(num3)<<endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// template <class T>
// T min1(T a, T b)
// {
//     return(a<b?a:b);
// }
// int main()
// {
//     int x,y;
//     float p,q;
//     cout<<"Enter integer values: ";
//     cin>>x>>y;
//     cout<<"Enter float values:  ";
//     cin>>p>>q;
//     cout<<"Min of int values is: "<<min1<int>(x,y)<<endl;
//     cout<<"Min of float values is: "<<min1<float>(p,q)<<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// template<class T>
// void swap1(T &a, T &b)
// {
//     T temp=a;
//     a=b;
//     b=temp;
// }
// int main()
// {
//     int num1=4, num2=5;
//     float num3=4.8, num4=5.3;
//     char c1='A', c2='a';
//     cout<<"***Before swapping***"<<endl;
//     cout<<"Num 1: "<<num1<<endl;
//     cout<<"Num 2: "<<num2<<endl;
//     cout<<"Num 3: "<<num3<<endl;
//     cout<<"Num 4: "<<num4<<endl;
//     cout<<"Char 1: "<<c1<<endl;
//     cout<<"Char 2: "<<c2<<endl;
//     swap1<int>(num1,num2);
//     swap1<float>(num3,num4);
//     swap1<char>(c1,c2);
//     cout<<"***After swapping***"<<endl;
//     cout<<"Num 1: "<<num1<<endl;
//     cout<<"Num 2: "<<num2<<endl;
//     cout<<"Num 3: "<<num3<<endl;
//     cout<<"Num 4: "<<num4<<endl;
//     cout<<"Char 1: "<<c1<<endl;
//     cout<<"Char 2: "<<c2<<endl;
//     return 0;
// }


#include<iostream>
using namespace std;
#define MAX 5
template<class Type>
Type sum(Type A[])
{
    Type Total=0;
    for(int i=0;i<MAX;i++)
    {
        Total += A[i];
    }
    return Total;
}
template<class Type>
void read(Type A[])
{
    for(int i=0;i<MAX;i++)
    {
        cin>>A[i];
    }
}
int main()
{
    int Array[MAX];
    float Array1[MAX];
    cout<<"Enter 5 elements for integer array: ";
    read<int>(Array);
    cout<<"Enter 5 elements for float array: ";
    read<float>(Array1);
    cout<<"Sum of elements of integer array: "<<sum<int>(Array);
    cout<<"Sum of elements of float array: "<<sum<float>(Array1);
    return 0;
}