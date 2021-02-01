#include<iostream>
#include<string>
using namespace std;
class Aman
{
public:
    string name;//data Member
    void introduce()//member function
    {
        cout<<"Hi CU"<<name<<endl;
    }
};
main()
{

    Aman g;
    g.name="Cloud Computing";
    g.introduce();
    Aman o;
    o.name="Cloud computing1";
    o.introduce();
    //c9out<<i.name;
}
