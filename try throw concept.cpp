#include<iostream>
#include<exception>
using namespace std;
main()
{
    int a=5,b=0,c;
    try
    {
        if(b==0)
        throw 10;
        c=a/b;
        cout<<c<<endl;
    }
    catch(const int x)
    {
        cout<<"Exception Occured"<<endl<<x;
    }
}
