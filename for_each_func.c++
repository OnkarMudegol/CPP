#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
void show(int n)
{
    cout<<n<<" ";
}
int main()
{
    int arr[]={12,3,17,8};
    vector<int> v(arr,arr+4);
    for_each(v.begin(),v.end(),show);
    return 0;
}