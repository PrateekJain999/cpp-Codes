#include<iostream>
using namespace std;

class shape
{
    float l,b,h,r;
	public:
		
	shape(int al)
	{
		l=al;
		
		cout<<"_:_:_:_:_:_:__:_:_:_:_:_:_: area of square :_:_:_:_:_:_:_:_:_:_:_:_:_";
		
		cout<<endl<<endl<<"formula: l*l"<<endl;
		cout<<"area: "<<l*l;
	}
	shape(int al,int ab)
	{
		
		l=al;
		b=ab;
		
		cout<<endl<<endl<<"_:_:_:_:_:_:__:_:_:_:_:_:_:  area of rectangle _:_:_:_:_:_:__:_:_:_:_:_:_: ";
		cout<<endl<<endl<<"formula: l*b"<<endl;
		cout<<"arae: "<<l*b;
	}
	shape(float ar)
	{
		r=ar;
		
		cout<<endl<<endl<<"_:_:_:_:_:_:__:_:_:_:_:_:_: area of circle :_:_:_:_:_:_:_:_:_:_:_:_:_";
		
		cout<<endl<<endl<<"formula: 3.14*r*r"<<endl;
		cout<<"area: "<<3.14*r*r;
	}
	shape(float ah,float ar)
	{
		r=ar;
		h=ah;
		
		cout<<endl<<endl<<"_:_:_:_:_:_:__:_:_:_:_:_:_: area of cylinder :_:_:_:_:_:_:_:_:_:_:_:_:_";
		
		cout<<endl<<endl<<"formula: 3.14*r*r*h"<<endl;
		cout<<"area: "<<3.14*r*r*h;
	}
};
main()
{
	shape s1(5);
	shape s2(5,10);
	shape s3(8.2f);
	shape s4(24.0f,3.6f);
}
