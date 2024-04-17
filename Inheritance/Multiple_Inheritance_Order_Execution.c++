#include<iostream>
using namespace std;
class M
{
    protected:
    int m;
    public:
    M(int x)
    {
        m=x;
        cout<<"In M"<<endl;
    }
};
class N
{
    protected:
    int n;
    public:
    N(int y)
    {
        n=y;
        cout<<"In N"<<endl;
    }
};
class P : public M, public N
{
    int l;
    public:
    P(int p, int q, int r):M(r),N(q)
    {
        l=p;
        cout<<"In P"<<endl;
    }
    void display()
    {
        cout<<"m = "<<m<<" "<<"n = "<<n<<" "<<"l = "<<l<<endl;
    }
};
int main()
{
    P obj1(3,2,1);
    obj1.display();
    return 0;
}
