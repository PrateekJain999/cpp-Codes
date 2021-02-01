#include<iostream>
using namespace std;

class first;
class second
{
	int b;
	public:
		void input()
		{
			cout<<"enter the value of b: ";
			cin>>b;
		}
		friend void sum(first,second);
};
class first
{
	int a;
	public:
		void input()
		{
			cout<<endl<<"enter the value of a: ";
			cin>>a;
		}
		friend void sum(first,second);
};
void sum(first o1,second o2)
{
	int add;
	add =o1.a+o2.b;
	cout<<endl<<"sum is: "<<add;
}
main()
{
	first f;
	second s;
	f.input();
	s.input();
	sum(f,s);
}
