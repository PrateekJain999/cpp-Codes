#include<iostream>
using namespace std;
class Student
{
private:
    int age;
    int getage()
    {
        return age-5;
    }
public:
    void setage(int value)
    {
        age=value;
    }
    void displayage()
    {
        cout<<getage()<<endl;
    }

};
main()
{
    Student o;
    o.setage(20);
    o.displayage();
}
