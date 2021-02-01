#include<iostream>
using namespace std;
class Student
{
    int id;
public:
    Student()
    {

    }
    Student(int a)
    {
     id=a;

    }
    void display()
    {
        cout<<"data="<<id<<endl;
    }
    Student(Student &trial)
    {
        id=trial.id;
        cout<<"Copy constructor"<<id;
    }
};
main()
{
    Student o(45);
    Student o1(o);
    o.display();
    o1.display();

}
