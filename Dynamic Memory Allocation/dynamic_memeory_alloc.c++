#include<iostream>
using namespace std;
// int main()
// {
//     int *p=NULL;
//     p=new int;
//     if(!p)
//     {
//         cout<<"Memory allocation failure!"<<endl;
//         exit(1);
//     }
//     else
//     {
//         cout<<"Memory sucessfully allocated!"<<endl;
//         *p=21;
//         cout<<"Integer value stored in memory is: "<<*p<<endl;
//         delete p;
//         exit(1);
//     }
//     return 0;
// }

// int main()
// {
//     float *p=NULL;
//     float *r=NULL;
//     float *t=NULL;
//     float *si=NULL;
//     p =new float;
//     t =new float;
//     r =new float;
//     si =new float;
//     if(!p || !r || !t || !si)
//     {
//         cout<<"Memory allocation failure!"<<endl;
//         exit(1);
//     }
//     else
//     {
//         cout<<"Memory allocated sucessfully!"<<endl;
//         cout<<"Enter the principle amount: ";
//         cin>>*p;
//         cout<<"Enter the rate of interest: ";
//         cin>>*r;
//         cout<<"Enter the time period of loan: ";
//         cin>>*t;
//         *si=(0.01)*(*p)*(*r)*(*t);
//         cout<<"Simple interest is: "<<*si<<endl;
//         delete p;
//         delete r;
//         delete t;
//         delete si;
//     }
//         return 0;
// }

// int main()
// {
//     int *arr;
//     int size;
//     cout<<"Enter the size of the integer array: ";
//     cin>>size;
//     arr=new int[size];
//     if(!arr)
//     {
//         cout<<"Memory allocation failure!";
//         exit(1);
//     }
//     else
//     {
//         cout<<"Memory allocation sucessful!"<<endl;
//         cout<<"***Enter the array elements***"<<endl;
//         for(int i=0;i<size;i++)
//         {
//             cin>>(arr[i]);
//         }
//         cout<<"***Entered elements are***"<<endl;
//         for(int i=0;i<size;i++)
//         {
//             cout<<(arr[i])<<endl;
//         }
//         exit(1);
//         delete []arr;
//         cout<<"Memory deallocated sucessfully!";
//     }
//     return 0;
// }

// int main()
// {
//     double *arr, *sum, *avg;
//     int size;
//     sum=new double;
//     avg=new double;
//     cout<<"Enter the size of double array: ";
//     cin>>size;
//     arr=new double[size];
//     if(!arr || !sum || !avg)
//     {
//         cout<<"Memory allocation failure!"<<endl;
//     }
//     else
//     {
//         cout<<"Memory allocation sucessfully!"<<endl;
//         cout<<"***Enter the array elements***"<<endl;
//         for(int i=0; i<size;i++)
//         {
//             cin>>arr[i];
//             *sum=*sum+arr[i];
//         }
//         cout<<"Sum of the elements in the array is: "<<*sum;
//         delete []arr;
//         delete sum;
//         delete avg;
//         exit(1);
//     }
//     return 0;
// }


int main()
{
    int *arr, sum=0;
    int size;
    cout<<"Enter the size of int array: ";
    cin>>size;
    arr=new int[size];
    if(!arr)
    {
        cout<<"Memory allocation failure!"<<endl;
    }
    else
    {
        cout<<"Memory allocation sucessfully!"<<endl;
        cout<<"***Enter the array elements***"<<endl;
        for(int i=0; i<size;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        cout<<"Sum of the elements in the array is: "<<sum;
        delete []arr;
        exit(1);
    }
    return 0;
}