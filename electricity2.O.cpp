#include<iostream>
using namespace std;
class Electricitybill
{
private:
    int n;
    char name[20];
    int units;
    double bill;
public:
    void getdata()
    {
        cout<<"WELCOME TO ELECTRIC DEPARTMENT:";
        cout<<"\nenter detailss of customer below:";
        cout<<"\nenter customer no.:";
        cin>>n;
        cout<<"\nenter customer name:";
        cin>>name;
        cout<<"\nenter nummber of units used:";
        cin>>units;
    }
    void inputdata()
    {
        cout<<"\nentered detaails of cusstomer are:";
        cout<<"\n customer no. is:"<<n;
        cout<<"\ncustomer name is:"<<name;
        cout<<"\nnumber of units consumed:"<<units;
        cout<<"|nBill of customer:"<<bill;
    }
    void electricbill()
    {
        if(units<=100)
            bill=units*1.20;
        else if(units<=300)
            bill=100*1.20+(units-100)*2;
        else
            bill=100*1.20+200*2+(units-300)*3;
    }
};
int main()
{
    Electricitybill b1;
    b1.getdata();
    b1.electricbill();
    b1.inputdata();
}
