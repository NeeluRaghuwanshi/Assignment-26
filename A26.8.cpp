// class Bank and define member functions to read principal , rate of interest and year.
//Another member functions to calculate simple interest and display it.
// Initialise all details using constructor.
#include<iostream>
using namespace std;
class Bank
{
private:
    int principle,rate,year;
public:
    Bank()
    {
        principle=1000;
        rate=5;
        year=5;
    }
    int simpleinterest()
    {
        return (principle*rate*year)/100;
    }
};
int main()
{
    Bank b1;
    cout<<"simple interest is : "<<b1.simpleinterest()<<endl;
    return 0;
}
