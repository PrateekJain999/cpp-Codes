#include<iostream>
#include<conio.h>
using namespace std;

class shape
{
	protected:
		int x,y;
	public:
		shape(int a,int b)
		{
			x=a;
			y=b;
		}
		//void area()
		virtual void area()
		{
			cout<<"\narea of rectangle: "<<x*y;
		}
};
class cylinder:public shape
{
	public:
		cylinder(int a,int b):shape(a,b)
		{
			
		}
		void area()
		{
			cout<<"\narea of cylinder: "<<3.14f*x*y;
		}
};
class triangle:public shape
{
	public:
		triangle(int a,int b):shape(a,b)
		{
			
		}
		void area()
		{
			cout<<"\narea of triangle: "<<.5*x*y;
		}
};
main()
{
	int m,n,sh,ch;
	cout<<"enter two no. : ";
	cin>>m>>n;
	shape *sp;
	
	do
	{
		cout<<"\nchoosea shape\n1) triangle\n2) rectangle\n3) cylinder : "<<endl;
		cin>>sh;
		
		if(sh==2)
		{
			shape s1(m,n);
			sp=&s1;             //parent class pointer store the address of base class 
		}
		else if(sh==3)
		{
			cylinder s2(m,n);
			sp=&s2;
		}
		else
		{
			triangle s3(m,n);
			sp=&s3;
		}
		sp->area();
		cout<<"\nwish to continue (0 for no) (1 for yes)";
		cin>>ch;
	}
	while(ch==1);
}
