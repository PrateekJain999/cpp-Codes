#include<iostream>
using namespace std;
class Addition
{
    int value1,value2;
public:
    void getdata(int a,int b)
    {
        value1=a;
        value2=b;
    }
    void display()
    {
        cout<<"VALUE1="<<value1<<endl<<"VALUE2="<<value2<<endl;

    }
    Addition operator+(Addition c);
};
Addition Addition::operator +(Addition c)
{
    Addition Tempobj;
    Tempobj.value1=value1+c.value1;
    Tempobj.value2=value2+c.value2;
    return Tempobj;
}
int main()
{


Addition o,b,j;
o.getdata(10,20);
b.getdata(2,3);
j=o+b+o;
j.display();
return 0;
}

