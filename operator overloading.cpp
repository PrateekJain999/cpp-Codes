#include<iostream>
using namespace std;

class cc
{
	int x,y;
	string ar;
	
	public:
		void getdata(int b,int c)
		{
			x=b;
			y=c;
			ar="prateek";
		}
		void display()
		{
			cout<<"x= "<<x<<""<<endl<<"y= "<<y<<""<<endl<<"ar= "<<ar<<""<<endl<<endl<<endl;
		}
		void operator *()
		{
			x=x*x;
			y=y*y;
		}
};
main()
{
	cc o;
	o.getdata(5,6);
	o.display();
	*o;
	o.display();
}
