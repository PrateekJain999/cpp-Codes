#include<iostream>
using namespace std;

class palindrome
{
	int r=0, n,t;
	
	public:
		void input()
		{
			cout<<"enter the value of n=";
			cin>>n;
		}
		void output()
		{
			t=n;
			while(t>0)
			{
				r=((r*10)+(t%10));
				t=t/10;
			}
			
			if(n==r)
			{
				cout<<""<<n<<" is a palindrome no.";
			}
			else
			{
				cout<<""<<n<<" is a not a palindrome no.";
			}
		}
};
main()
{
	palindrome p;
	p.input();
	p.output();
}
