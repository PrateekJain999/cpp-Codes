#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
    int age=45;
    string name="nmmm";
public:
    void display()
    {
        //age=89;
        //name="cu";
        cout<<age<<name<<endl;
    }
    /*Student()
    {
        age=24;
        name="CU";
        cout<<age<<name<<endl;
    }
   /* void display()
    {
        cout<<age<<name<<endl;
    }*/
};
main()
{
Student o;
o.display();

}
