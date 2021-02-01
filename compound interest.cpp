#include<iostream>
using namespace std;

main()
{
	int t,i;
	float p,r;
	
	cout<<"enter the value of initial rate: ";
	cin>>p;
	cout<<"enter the value of rate: ";
	cin>>r;
	cout<<"enter the value of time: ";
	cin>>t;
	
	for(i=1;i<=t;i++)
	{
		p=p+(p*(r/100));
	}
	cout<<"the final amount is: "<<p;
}
