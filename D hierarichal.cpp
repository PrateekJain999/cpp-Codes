#include<iostream>
using namespace std;
class University
{
public:
    string name;
    void uname(string iname)
    {
        name=iname;
        cout<<name<<endl;
    }
};
class College:public University
{
public:
    int year;
    void nyear(int iyear)
    {
        year=iyear;
        cout<<"College:"<<name<<":"<<year<<endl;
    }
};
class Student:public University
{
    public:
    int id;
    void nid(int ids)
    {
        id=ids;
        cout<<"Student:"<<name<<":"<<"id:"<<id<<endl;
    }
};
main()
{
    University j;
    j.uname("CU");
    College o;
    Student b;
    o.nyear(2018);
    b.nid(123);

}
