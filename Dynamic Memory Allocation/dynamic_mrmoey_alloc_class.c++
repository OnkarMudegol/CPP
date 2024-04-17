#include<iostream>
using namespace std;
class sample
{
    public:
    sample()
    {
        cout<<"Constructor called!"<<endl;
    }
    ~sample()
    {
        cout<<"Destructor called!"<<endl;
    }
};
int main()
{
    int n;
    cout<<"Enter the no. of objects: ";
    cin>>n;
    sample *obj=new sample[n];
    delete [] obj;
    return 0;
}