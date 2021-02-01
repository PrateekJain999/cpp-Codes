#include<iostream>
using namespace std;
class CC
{
    int x,y,z;
public:
    void getdata(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void display();
    void operator +();
};
void CC::display()
{
    cout<<"X="<<x<<"Y="<<y<<"Z="<<z<<endl;
}
void CC::operator +()
{
    x=-x;
    y=-y;
    z=-z;
}
main()
{
    CC o;
    o.getdata(1,5,10);
    o.display();
    +o;
    o.display();
}
