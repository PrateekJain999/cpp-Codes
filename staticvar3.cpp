#include<iostream>
using namespace std;
class Student
{
public:
   static int count;
    void display()
    {

        cout<<"There are  "<<++count<<"   students are there in this program"<<endl;
    }
};
int Student::count=0;
main()
{
    //<<Student::count<<endl;
    Student o,a,b;
    o.display();
    a.display();
    b.display();
   }
