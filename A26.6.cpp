//class student and write a program to enter student details using constructor and define member function to display all the details.
#include<iostream>
using namespace std;
class Student
{
private:
    char name[20];
    int rollno;
    int marks;
public:
    Student(char n[],int r,int m)
    {
        name[20]=n[20];
        rollno=r;
        marks=m;
    }
    void display()
    {
        cout<<"Name of student is : "<<name[20]<<endl;
        cout<<"Roll number is : "<<rollno<<endl;
        cout<<"Total marks : "<<marks<<endl;
    }
};
int main()
{
    Student s1("Neel",1,505);
    s1.display();
    return 0;
}
