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
			cout<<endl;
			cout<<"the value of a is : "<<a<<endl;
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
			cout<<"the value of b is : "<<b<<endl;
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
			cout<<"the value of c is : "<<c<<endl;
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
		void displaya()
		{
			super::display();
			super1::display();
			super2::display();
			cout<<"the value of d is : "<<d;
			cout<<endl<<endl;
			
			cout<<"the value of a*d is : "<<a*d<<endl;
			cout<<"the value of b*d is : "<<b*d<<endl;
			cout<<"the value of c*d is : "<<c*d<<endl;
		}
};
main()
{
	hybrid h;                                   //here if we create a obj of a hybrid class that means it is valid for all class and call tha constructor
	h.super::display();
	h.super1::display();
	
}
