#include<iostream>
#include<string>
using namespace std;
class Student{
private:
    int age;
    string name;
public:
    Student()
    {
        age=24;
        name="CU";
        cout<<age<<endl<<name<<endl;
    }
    Student(string name1)
    {
        age=10;
        name=name1;
        cout<<"The String constructor,"<<"age="<<age<<","<<"name="<<name<<endl;
    }
    Student(int iage)
    {
        age=iage;
        name="C Language";
        cout<<"The integer constructor,"<<"age="<<age<<","<<"name="<<name<<endl;
    }
     Student(string iname,int iage)
    {
        age=iage;
        name=iname;
        cout<<"The integer &String constructor,"<<"age="<<age<<","<<"name="<<name<<endl;
    }
};
main()
{
    Student o;
    Student b("cloud");
    Student j(25);
    Student e("IBM Cloud",20);
}
