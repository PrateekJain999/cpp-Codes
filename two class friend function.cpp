#include<iostream>
using namespace std;

class second;

class first
{
	int a;
	public:
		void input1(int m)
		{
			a=m;
			cout<<endl<<"entered value of a is: "<<a;
		}
		
		friend void sum(first ,second );
};
class second
{
	int b;
	public:
		void input2(int n)
		{
			b=n;
			cout<<endl<<"entered value of b is: "<<b;
		}
		
		friend void sum(first ,second );
};
void sum(first x,second y)
{
	int add;
	
	add=x.a+ y.b;
	cout<<"sum: "<<add;
}
int main()
{
	first f;
	second s;
	f.input1(12);
	s.input2(8);
	sum(f,s);
	return 0;
}
