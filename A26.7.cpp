// class Box and write a program to enter length, breadth and height,
//and initialise objects using constructor also define member functions to calculate volume of the box.
#include<iostream>
using namespace std;
class Box
{
private:
    int l,b,h;
public:
    Box()
    {
        l=2;
        b=3;
        h=4;
    }
    int volume()
    {
        return l*b*h;
    }
};
int main()
{
    Box b;
    cout<<"Volume of box is : "<<b.volume()<<endl;
    return 0;
}
