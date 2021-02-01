#include<iostream>
using namespace std;

class factorial
{
	int n,i,ans=1;
	
	public:
		void input()
		{
			cout<<"enter the value of n: ";
			cin>>n;
		}
		void output()
		{
			for(i=1;i<=n;i++)
			{
				ans=ans*i;
			}
			cout<<"factorial of n is: "<<ans<<"";
		}
};
main()
{
	factorial f;
	f.input();
	f.output();
}
