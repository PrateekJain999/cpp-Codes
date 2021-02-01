#include<iostream>
using namespace std;
class Student
{
    public:
    Student()
    {
        cout<<"Constructor"<<endl;
    }
    ~Student()
    {
        cout<<"Destructor"<<endl;
    }
};
main()
{
    Student *o;
    o=new Student();
    delete o;

}
