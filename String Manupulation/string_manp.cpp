// #include<iostream>
// #include<string>
// using namespace std;
// int main()
// {
//     string s3("12345");
//     string s4("abcde");
//     cout<<"String S1 is: "<<s3<<" and string S2 is: "<<s4<<endl;
//     s3.append(s4,1,2);
//     cout<<"S2 appended to S1 from index 1 and 2 characters: "<<s3<<endl;
//     string s1("12345");
//     string s2("abcde");
//     cout<<"String S1 is: "<<s1<<" and string S2 is: "<<s2<<endl;
//     s1.insert(4,s2);
//     cout<<"S2 insert in S1 at 4th index: "<<s1<<endl;
//     s1.erase(4,5);
//     cout<<"S1 earsed from 4th index 5 elements: "<<s1<<endl;
//     s2.replace(1,2,s1);
//     cout<<"Replaceing 2 elemets from 1st index of S2 with elements form S1: "<<s2<<endl;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="arlcome";
    string s2="wearomea";
    cout<<s1.find("lc")<<endl;
    cout<<s2.rfind("ea")<<endl;
    cout<<s2.find_last_of('e')<<endl;
    s2=s1.substr(0,2);
    cout<<s2<<endl;
    return 0;
}