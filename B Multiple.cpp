#include<iostream>
#include<string>
using namespace std;
class College
{
public:
    string name;
    void getname(string n)
    {
        name=n;
    }
};
class Year
    {
    public:
        int years;
        void getyear(int y)
        {
            years=y;
        }
    };
    class Student:public College,public Year
    {
    public:
        int id;
        void display(int i)
        {
            id=i;
            cout<<name<<endl<<years<<endl<<id<<endl;
        }
    };

    main()
    {
        Student o;
        o.getname("Cu");
        o.getyear(2000);
        o.display(01);
    }
