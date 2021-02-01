#include<iostream>
using namespace std;
main()
{
	int i,n,count=0;
	
	cout<<"enter the value of n";
	cin>>n;
	
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
			cout<<"not prime no";
	}
}
