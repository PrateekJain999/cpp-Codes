//multiplication table print

#include<iostream>
using namespace std;

main()
{
	int n,i,p;
	
	cout<<"enter the value of n: ";
	cin>>n;
	cout<<endl;
	
	for(i=1;i<=10;i++)
	{
		p=i*n;
		
		cout<<""<<n<<"*"<<i<<" = "<<p<<""<<endl;
	}
}
