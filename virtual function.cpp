#include<iostream>
using namespace std;

class super
{
	protected:
		
	int a;
	public:
		super()
		{
			cout<<"enter the value of a: ";
			cin>>a;
		}
		void display()
		{
			cout<<"the value of a is : "<<a;
		}
};
class super1:public virtual super
{
	protected:
	int b;
	public:
		super1()
		{
			cout<<"enter the value of b: ";
			cin>>b;
		}
		void display()
		{
			cout<<"the value of b is : "<<b;
		}
};
class super2:public virtual super
{
	protected:
	int c;
	public:
		super2()
		{
			cout<<"enter the value of c: ";
			cin>>c;
		}
		void display()
		{
			cout<<"the value of c is : "<<c;
		}
};
class hybrid:public super1,public super2
{
	protected:
	int d;
	public:
		hybrid()
		{
			cout<<"enter the value of d: ";
			cin>>d;
		}
		void display()
		{
			super::display();
			super1::display();
			super2::display();
			cout<<"the value of d is : "<<d;
			cout<<"the value of d is : "<<a*d;
			cout<<"the value of d is : "<<b*d;
			cout<<"the value of d is : "<<c*d;
		}
};
main()
{
	hybrid h;
	
	
}
