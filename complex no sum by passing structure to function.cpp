#include<iostream>
using namespace std;

struct complex
{
	int a,b,c,d,f1,f2,f3;
};
void sum(int p,int q,int r,int s)
{
	int x,y;
	
	cout<<"sum of two complex no is: "<<endl;
	cout<<endl;
	cout<<"f1+f2 = ("<<p<<" + "<<q<<"i) + ("<<r<<" + "<<s<<"i) "<<endl;
	cout<<endl;
	cout<<"the sum of complex no is: f3 = ("<<p<<" + "<<r<<") + ("<<q<<"+"<<s<<")i"<<endl;
	cout<<endl;
	x=p+r;
	y=q+s;
	
	cout<<"the sum of complex no is: f3 = ("<<x<<") + ("<<y<<")i"<<endl;
}
main()
{
	struct complex s;
	
	cout<<"enter the value of real part of two no: a & c: ";
	cin>>s.a>>s.c;
	
	cout<<"enter the value of img part of two no: b & d: ";
	cin>>s.b>>s.d;
	
	cout<<"f1 = "<<s.a<<" + "<<s.b<<"i"<<endl;
	cout<<"f2 = "<<s.c<<" + "<<s.d<<"i"<<endl;
	cout<<endl;
	sum(s.a,s.b,s.c,s.d);
}
