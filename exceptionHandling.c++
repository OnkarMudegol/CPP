// #include<iostream>
// using namespace std;
// int main()
// {
//     int a,b;
//     cout<<"Enter the values of a and b: ";
//     cin>>a>>b;
//     int x=a-b;
//     try
//     {
//         if(x!=0)
//         {
//             cout<<"Result(a/x): "<<(a/x)<<endl;
//         } 
//         else{
//             throw(x);
//         }
//     }
//     catch(int i)
//     {
//         cout<<"Exception caught: "<<x<<endl;
//         cout<<"No difference between the two value!"<<endl;
//     }
//     cout<<"End of code!"<<endl;
//     return 0;
// }


//Array out of bound

#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    try
    {
        int j=0;
        while(1)
        {
            cout<<a[j]<<endl;
            j++;
            if(j==5)
            {
                throw j;
            }
        }
    }
    catch(int i)
    {
        cout<<"No element found on index: "<<j<<endl;
    }
    
    return 0;
}