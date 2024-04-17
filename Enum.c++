// Enumeration data type
#include<iostream>
using namespace std;
enum color{
    black,
    blue=0,
    red
};
int main()
{
    color obj=black;
    cout<<obj;
    return 0;
}