#include<iostream>
using namespace std;

class super1
{
	protected:
		int a,b;
	
	public:
		void getdata()
		{
			cout<<"enter the value of a: ";
			cin>>a;
		}
		void getdata1()
		{
			cout<<"enter the value of b: ";
			cin>>b;
		}
		
};
class super2: public super1
{
	protected:
		int n;
	
	public:
		void display()
		{
			cout<<"enter the value of n: ";
			cin>>n;
		}
};
class super3:public super2
{
	int c,i;
	
	public:
		
		void fabnocci_series()
		{
			cout<<"the fabonacci seris is:    ";
			for(i=0;i<n;i++)
			{
				cout<<"  "<<a<<"";
				
				c=a+b;
		        a=b;
		        b=c;
			}
			
		}
};
main()
{
	super3 s;
	s.getdata();
	s.getdata1();
	s.display();
	s.fabnocci_series();
}
