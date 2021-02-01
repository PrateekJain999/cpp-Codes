#include<iostream>
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
			virtual void area()
			{
				cout<<"\nArea of rectangle = "<<x*y;
			}
};
class cylinder : public shape
{
	public:
		cylinder(int a,int b):shape(a,b)
		{}
			void area()
			{
				cout<<"Area of cylinder = "<<3.14f*x*y*x;
			}
};
class triangle: public shape
{
	public:
		triangle(int a,int b):shape(a,b)
		{}
		void area()
		{
			cout<<"Area of triangle = "<<0.5*x*y
		}
};
main()
{
	int m,n,sh,ch;
	cout<<"\n Enter 2 numbers \n";
	cin>>m>>n;
	shape *sp;
	do
	{
		cout<<"Choose a shape \n 1 Triangle\n 2 Rectangle \n 3 Cylinder \n\n";
		cin>>sh;
		if(sh==2)
		{
			shape s1(m,n);
			sp=&s1;
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
		cout<<"Wish to continue 0NO 1YES\n";
		cin>>ch;
	}
	while(ch==1);
}
