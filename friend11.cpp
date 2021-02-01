#include<iostream>
#include<string>
using namespace std;
class Student
{
    string name;
    int age;
public:
    Student(string name1,int age1)
    {
        name = name1;
        age=age1;
    }
    void stu()
    {
        cout<<name<<endl<<age<<endl;
    }
    friend class Student(student o);
};
void display(Student o)
{
    cout<<o.name<<endl<<o.age<<endl;
}
main()
{
    Student b("CC",20);
    display(b);
}
