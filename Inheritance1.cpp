#include<iostream>
#include<string>
using namespace std;
class Person
{
public:
    string name;
   int age;
   /* void get(string n,int g)
    {
        name=n;
        age=g;
    }*/
    void lky(string n)
    {
        name=n;
    }
    void getage(int g)
    {
        age=g;
    }
};
class Student:public Person
{
public:
    int id;
    void getid(int i)
    {
        id=i;
    }
    void display()
    {
        cout<<"Name="<<name<<"\n"<<"Age="<<age<<endl<<"ID="<<id;
    }
} ;

main()
{
    Student o;
    o.lky("Clod computing ");
    o.getage(20);
    o.getid(600);
    o.display();
}
