#include<iostream>
#include<string>
using namespace std;
class Cc
{
public:
    string name;
    void introduce();
};
void Cc::introduce()
{
    cout<<name<<endl;
}
main()
{
    Cc o;
    o.name="Cloud computing";
    o.introduce();
}
