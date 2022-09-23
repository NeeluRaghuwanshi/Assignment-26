//class Date and write a program to Display Date and initialise date object using Constructors.
#include<iostream>
using namespace std;
class Date
{
private:
    int day,month,year;
public:
    Date()
    {
        day=15;
        month=9;
        year=2022;
    }
    void displaydate()
    {
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main()
{
    Date d;
    d.displaydate();
    return 0;
}
