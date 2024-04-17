// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v1(10);
//     cout<<"Size: "<<v1.size()<<endl;
//     for(int i=0;i<=9;i++)
//     {
//         v1[i]=i;
//     }
//     for(int i=10;i<=19;i++)
//     {
//         v1.push_back(i);
//     }
//     cout<<"Size: "<<v1.size()<<endl;
//     for(int i=10;i<=19;i++)
//     {
//         cout<<v1[i]<<endl;
//     }
//     v1.pop_back();
//     v1.pop_back();
//     cout<<"New Size of the vector: "<<v1.size()<<endl;
//     vector<int>::iterator v=v1.begin();
//     while(v!=v1.end())
//     {
//         cout<<"Value of v: "<<*v<<endl;
//         v++;
//     }   
//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> v1(10);
//     cout<<"Size: "<<v1.size()<<endl;
//     for(int i=0;i<=9;i++)
//     {
//         v1[i]=i;
//     }
//     vector<int>:: iterator i = v1.begin();
//     i=i+3;
//     v1.insert(i,100);
//     v1.erase(v1.begin()+1,v1.begin()+5);
//     for(int i=0;i<v1.size();i++)
//     {
//         cout<<v1[i]<<endl;
//     }
//     v1.clear();
//     cout<<"Size: "<<v1.size()<<endl;
//     return 0;
// }


// finding an element in a vector
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int key;
    int arr[]={12,3,17,8,34,56,9};
    vector<int>v(arr,arr+7);
    vector<int>::iterator iter;
    cout<<"Enter value to find: ";
    cin>>key;
    iter=find(v.begin(),v.end(),key);
    if(iter!=v.end())
    {
        cout<<"Element found!"<<endl;
    }
    else
    {
        cout<<"Element not found!"<<endl;
    }
    return 0;
}


//Iterators
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int arr[]={12,3,17,8};
//     vector<int> v(arr,arr+4);
//     for(vector<int>::iterator i=v.begin();i!=v.end();i++)
//     {
//         cout<<*i<<" "; 
//     }
//     cout<<endl;
//     return 0;
// }