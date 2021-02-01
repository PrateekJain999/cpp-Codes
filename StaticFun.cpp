#include<iostream>
using namespace std;

class Student
{
public:
 static int count;
 static void display()
 { 
    cout<<"There are "<<++count<<" students in a class\n";
 }

};
int Student::count=0;
main()
{
    Student::display();
      Student::display();
}
