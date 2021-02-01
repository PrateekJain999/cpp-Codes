#include<iostream>
using namespace std;

void prime(int n)
{
	int i,count=0;
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		cout<<"prime no";
	}
	else
	{
		cout<<"not a prime no";
	}
}
main()
{
	int a;
	cout<<"enter the value of a to check: ";
	cin>>a;
	
	prime(a);
}
