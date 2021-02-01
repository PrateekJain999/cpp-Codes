#include<iostream>
using namespace std;
class Student
{
    int id;
    int age;
public:
    Student()
    {

    }
    Student(int a,int b)
    {
        id=a;
        age=b;
    }
    Student(Student &o)
    {
        id=o.id;

    }
    void display()
    {
        cout<<"id="<<id<<endl;
        cout<<"age="<<age<<endl;
    }
};
main()
{
    Student o1(45,20);
    Student o2(o1);
    cout<<"Object o1"<<endl;
    o1.display();
    cout<<endl;
    cout<<"Object o2"<<endl;
    o2.display();
    cout<<endl;
    Student o3(10,30);
    o3.display();

}
