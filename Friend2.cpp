#include<iostream>
#include<string>
using namespace std;
class Student
{private:
    string name;
    int age;
public:
    Student(string name1,int age1){
    name=name1;
    age=age1;
    }
    void ids()
    {
        cout<<name<<endl<<age<<endl;
    }
    friend void display(Student o);
};
void display(Student o)
{
    cout<<o.name<<endl<<o.age<<endl;
}
main ()
{
    Student b("CU",21);
    display(b);
}
