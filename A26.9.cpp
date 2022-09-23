//a class Bill and define its member function get() to take detail of customer ,
// calculateBill() function to calculate electricity bill.
#include<iostream>
using namespace std;
class Bill
{
private:
    int units,bill;
public:
    int get()
    {
        cout<<"Enter unit consumption : ";
        cin>>units;
    }
    int calculate()
    {
        if(units<=100)
            bill=units*1.20;
        else if(units<=200)
            bill=100*1.20+(units-100)*2;
        else
            bill=100*1.20+100*2+(units-200)*3;
    }
};
int main()
{
    Bill b;
    b.get();
    cout<<"Your total bill is : "<<b.calculate()<<endl;
    return 0;
}
