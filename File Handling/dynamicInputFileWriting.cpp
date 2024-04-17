#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    cout<<"**Enter the input to be stored in the file**\n";
    string s;
    getline(cin,s);
    ofstream f("Dynamic.txt");
    f<<s;
    f.close();
    cout<<"Data Saved.\n";
    ifstream b("Dynamic.txt");
    if(!b.is_open())
    {
        cout<<"Error in loading the file!!";
        return 1;
    }
    string q;
    while (getline(b,q))
    {
        cout<<q<<endl;
    }
    return 0;
}