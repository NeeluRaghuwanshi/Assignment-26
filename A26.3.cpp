// class Cube and calculate Volume of Cube and initialise it using constructor.
#include<iostream>
using namespace std;
class Cube
{
private:
    int a;
public:
    Cube()
    {
        a=0;
    }
    void set(int x)
    {
        a=x;
    }
    int show()
    {
        cout<<a;
    }
    int volume()
    {
        return a*a*a;
    }
};
int main()
{
    Cube c;
    c.set(4);
    cout<<"Volume of cube is "<<c.volume()<<endl;
    return 0;
}
