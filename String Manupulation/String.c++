#include<bits/stdc++.h>
using namespace std;
int  main()
{
    string name;
    cin>>name;
    transform(name.begin(), name.end(), name.begin(), ::toupper);
    cout<<name;
    return 0;
}