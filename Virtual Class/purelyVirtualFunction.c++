#include<iostream>
using namespace std;
class ItemType
{
    public:
    virtual int calculateAmount()=0;
};
class Wooden : public ItemType
{
    int noOfItems, cost;
    public:
    int get()
    {
        cin>>noOfItems>>cost;
    }
    int calculateAmount()
    {
        return(noOfItems*cost);
    }

};
class Electronics : public ItemType
{
    int cost;
    public:
    int get()
    {
        cin>>cost;
    }
    int calculateAmount()
    {
        int disc = 0.2*cost;
        cost = cost-disc;
        return(cost);
    }
};
int main()
{
    Wooden W1;
    Electronics E1;
    int choice;
    cin>>choice;
    if(choice==1)
    {
        W1.get();
        W1.calculateAmount();
    }
    else if(choice == 2)
    {
        E1.get();
        E1.calculateAmount();
    }
    else
    {
        cout<<"Invalid input!"<<endl;
    }
    return 0;
}