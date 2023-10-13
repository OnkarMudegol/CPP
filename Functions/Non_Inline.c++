#include<iostream>
using namespace std;
int square(int s)
{
    return s*s;
}
int main()
{
    int num;
    cout<<"Enter number to cumpute its square:";
    cin>>num;
    cout<<"The square of "<<num<<" is:"<<square(num);
    return 0;
}