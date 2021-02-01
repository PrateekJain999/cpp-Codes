#include<iostream>
using namespace std;
class Subraction
{
    int a,b,c;
public:
    Subraction()
    {

    }
    Subraction(int A,int B,int C)
    {
        a=A;
        b=B;
        c=C;
    }
    void display()
    {
        cout<<"\t a="<<a<<endl;
        cout<<"\t b="<<b<<endl;
        cout<<"\t c="<<c<<endl;

    }
    Subraction operator --()
    {
        //Subraction temp;
        a=--a;
        b=--b;
        c=--c;
        //return temp;
    }
};
main()
{
    Subraction O(5,10,20);
    cout<<"Before operator overloading:\n";
    O.display();
    //Subraction O2;
    //O2=;
	--O;
    cout<<"After operator overloading:\n";
    O.display();
}
