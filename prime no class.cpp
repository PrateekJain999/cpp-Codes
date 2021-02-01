#include<iostream>
using namespace std;

class Prime_no
{
	int  i,n,count=0;
	
	public:
		void input()
		{
			cout<<"enter the value of n:";
			cin>>n;
		}
		
		void output()
		{
			for (i=0;i=n;i++)
			{
				if(n%i==0)
				{
					count++;
				}
			}
			if(count==2)
			{
				cout<<""<<n<<" is prime no";
			}
			else
			{
				cout<<""<<n<<" is not a prime no";
			}
		}
};
main()
{
	Prime_no p;
	p.input();
	p.output();
}
