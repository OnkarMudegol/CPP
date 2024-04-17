#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int prev_num=0;
    int curr_num=1;
    if(n<0)
    {
        cout<<"Invalid input. Number should be positive.";
    }
    else if(n==1)
    {
        cout<<"The fibonacci series is: "<<prev_num;
        return 0;
    }
    else if(n>1)
    {
        cout<<"The fibonacci series is: "<<prev_num<<","<<curr_num<<",";
        for(int i=2;i<n;i++)
        {
            int next_num=prev_num+curr_num;
            cout<<next_num<<",";
            prev_num=curr_num;
            curr_num=next_num;
        }
        
    }
    return 0;
}