// class Counter and Write a program to Show Counter using Constructor.
#include<iostream>
using namespace std;
class Counter
{
    private:
        int count;
    public:
        counter()
        {
            count=0;

        }
        void countcount()
        {
            count++;
        }
        int getcount()
        {
            return count;
        }
};

int main ()
{
    Counter c1;
    cout<<endl<<"Before Count : ";
    cout<<c1.getcount();
    c1.countcount();
    cout<<endl<<"After Count : ";
    cout<<c1.getcount();
    cout<<endl;
    return 0;
}
