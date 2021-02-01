#include<iostream>
using namespace std;
class Cc
{
public:
    inline void display(int a)
    {
        cout<<a<<endl;
    }
};
main()
{
    Cc o;
    o.display(10);
}
