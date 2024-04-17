//non - virtual destructor problem
// #include<iostream>
// using namespace std;
// class base
// {
//     public:
//     base()
//     {
//         cout<<"Constructing base.."<<endl;
//     }
//     ~base()
//     {
//         cout<<"Destructing base.."<<endl;
//     }
// };
// class derived1 : public base{
//     public:
//     derived1()
//     {
//         cout<<"Constructing derived.."<<endl;
//     }
//     ~derived1()
//     {
//         cout<<"Destructing derived.."<<endl;
//     }
// };
// int main()
// {
//     base *b = new derived1;
//     delete b;
//     return 0;
// }

//Virtual destructor
#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Constructing base.."<<endl;
    }
    virtual ~base()
    {
        cout<<"Destructing base.."<<endl;
    }
};
class derived1 : public base{
    public:
    derived1()
    {
        cout<<"Constructing derived.."<<endl;
    }
    ~derived1()
    {
        cout<<"Destructing derived.."<<endl;
    }
};
int main()
{
    base *b = new derived1;
    delete b;
    return 0;
}

