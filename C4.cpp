//Private variables
#include<iostream>
using namespace std;
class Student
{
private:
    int age;
public:
    void setAge(int value)
    {
        age=value;
    }
    void displayage()
    {
        cout<<age<<endl;
            }

};
main()
{
    Student o;
    o.setAge(24);
    o.displayage();


}
