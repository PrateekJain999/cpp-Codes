#include<iostream>
using namespace std;

main()
{
	int sum=1,pow,num,i;
	
	cout<<"enter the value of num";
	cin>>num;
	cout<<"enter the value of power of that number";
	cin>>pow;
	
	for(i=1;i<=pow;i++)
	{
		sum=sum*num;
	}
	cout<<""<<pow<<" power of "<<num<<" is: "<<sum<<"";
}
