// class StaticCount and create a static variable.
//Increment this variable in a function and call this 3 times and display the result.
#include<iostream>
using namespace std;
class StaticCount
{
private:
    static int s;
public:
    int increment()
    {
        s++;
        cout<<s<<endl;
    }
};
int StaticCount::s;
int main()
{
    StaticCount s;
    s.increment();
    s.increment();
    s.increment();
    return 0;
}
