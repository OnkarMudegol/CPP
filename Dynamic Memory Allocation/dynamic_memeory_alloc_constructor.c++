// #include<iostream>
// using namespace std;
// class example1
// {
//     const char *ptr;
//     public:
//     example1()
//     {
//         ptr = new char[8];
//         ptr = "Dynamic";
//     }
//     void show()
//     {
//         cout<<ptr<<endl;
//     }
// };
// int main()
// {
//     example1 *ptr = new example1();
//     ptr->show();
//     return 0;
// }

#include<iostream>
using namespace std;
class Array
{
    private:
    int *arr;
    int n;
    public:
    Array();
    void show_data();
};
Array::Array()
{
    cout<<"Enter size: ";
    cin>>n;
    arr=new int[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void Array::show_data()
{
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}
int main()
{
    int no_obj;
    cout<<"Enter the no of objects: ";
    cin>>no_obj;
    Array *ptr=new Array[no_obj];
    for(int i=0;i<no_obj;i++)
    {
        ptr->show_data();
        ptr++;
    }
    return 0;
}