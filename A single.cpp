#include<iostream>
#include<string>
using namespace std;
class College
{

protected:
    string name;
    public:
    void get(string n)
    {
        name=n;
        cout<<name;
    }

};
class Student:public College
{
public:
   /* void display()
    {
        cout<<name;

    }*/
} ;
main()
{
    Student o;
    o.get("CU");

}
