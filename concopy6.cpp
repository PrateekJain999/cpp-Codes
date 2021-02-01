#include<iostream>
using namespace std;
class Student
    {
        int id;
    public:
        Student()//Default constructor
        {

        }
        Student(int x)
        {
            id=x;
        }
        void display()
        {
            cout<<"id="<<id<<endl;
        }

    };
main()
{
    Student o(45);
    Student o1(o);
    o.display();
    o1.display();
}
