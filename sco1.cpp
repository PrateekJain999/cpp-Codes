#include<iostream>
using namespace std;
class Student
{
    public:
static int C;
};
//declaring static variable
int Student ::C=10;
main()
{
    Student a;
    cout<<Student::C<<endl;
}
