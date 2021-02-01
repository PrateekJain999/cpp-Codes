#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
    string name;
public:
    void get(string n)
    {
        name=n;
    }
};
class Student:public Person
{
public:
   int a;
    void display()
    {
        cout<<name<<endl;
    }
};
main()
{
    cout<<sizeof(Person)<<endl;
    cout<<sizeof(Student)<<endl;
   Student o;
    o.get("clod computing");
    o.display();
}
