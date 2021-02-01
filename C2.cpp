//Creating Objects from a Class in Different Ways

#include<iostream>
#include<string>
using namespace std;
class Cc
{
public:
    int a=10;
    string name="HI";
    void introduce()
    {
        cout<<"hi"<<endl<<name<<endl<<a;
    }
};
main()
{
    Cc c1;
    Cc *c=new Cc();
    c1.name="Cloud computing";
    c1.introduce();
    c->name="People";
    c->introduce();
}
