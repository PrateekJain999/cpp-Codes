//To define a function outside a class.
#include<iostream>
using namespace std;
class Student
{
public:
    void play();
};
void Student::play()
{
    cout<<"Hello"<<endl;
}

main()
{
    Student a;
    a.play();
}
