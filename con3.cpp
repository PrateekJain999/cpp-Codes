#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    int age;
    string name;
public:
    Student()
    {
        age=24;
        name="CU";
        cout<<"Hello"<<endl;
    }
    void display()
    {
        cout<<age<<endl<<name<<endl;
    }
};
main()
{
Student o;
o.display();
Student b;

}

