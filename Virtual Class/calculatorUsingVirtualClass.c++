#include<iostream>
using namespace std; 
class operationsBase { 
    public: 
    virtual int addition() = 0; 
    virtual int subtraction() = 0; 
    virtual int division() = 0; 
    virtual int multiplication() = 0;

};

class operationsDerived : public operationsBase { 
    int x,y; 
    public: 
    int getdata() { 
        cout<<"Enter first number: "; 
        cin>>x; 
        cout<<"Enter second number: "; 
        cin>>y; 
        cout<<"\n"; 
        } 
    int addition() { 
        cout<<"Addition of the two numbers is: "<<(x+y)<<endl; 
        } 
            int multiplication() { 
                cout<<"Multiplication of both the numbers is: "<<(x*y)<<endl; 
                } 
                int subtraction() 
                { 
                    cout<<"Subtraction of both the numbers is: "<<(x-y)<<endl; 
                } 
                int division() { 
                    cout<<"Division of both the numbers is: "<<(x/y)<<endl; 
                    } 
                }; 
                int main() { 
                    operationsDerived o1; 
                    o1.getdata(); 
                    cout << "Addition of the two numbers is: " << o1.addition() << endl; 
                    cout << "Subtraction of both the numbers is: " << o1.subtraction() << endl; 
                    cout << "Multiplication of both the numbers is: " << o1.multiplication() << endl; 
                    cout << "Division of both the numbers is: " << o1.division() << endl; 
                    return 0; 
                }