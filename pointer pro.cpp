#include<iostream>
using namespace std;

class A
{
	int num;
	string name;
	
	public:
		virtual void getdata()
		{
			cout<<"number: ";
			cin>>num;
			cout<<"name: ";
			cin>>name;
		}
		virtual void putdata()
		{
			cout<<"details::";
			cout<<endl<<"num: "<<num;
			cout<<endl<<"name: "<<name;
		}
		
};

class details:public A
{
	
	public:
		void getdata()
		{
			cout<<"hi";
		}
		void putdata()
		{
			cout<<endl<<"hlw";
		}
	
};
main()
{
	A *a;
	details d;
	A b;
	a = &b;
	a->getdata();
	a->putdata();
	cout<<endl<<endl;
	a = &d;
	a->getdata();
	a->putdata();
}
