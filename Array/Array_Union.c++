#include<iostream>
using namespace std;
union Data
{
    int intValue;
    char charValue;
    double doublevalue;
};
int main()
{
    const int Size =5;
    Data dataarray[Size];
    dataarray[0].intValue=42;
    dataarray[1].charValue='A';
    dataarray[2].doublevalue=3.14;
    dataarray[3].intValue=100;
    dataarray[4].charValue='Z';
    cout<<"Array of Unions:"<,endl;
    for(int i=0;i<Size;i++)
    {
        cout<<"Index"<<i<<":";
    }
    if(i%3 ==0)
    {
        cout<<"Interger Value:"<<dataarray[i].
    }
}