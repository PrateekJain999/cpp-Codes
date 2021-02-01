#include<iostream>
using namespace std;

main()
{
	int i,j,n,temp;
	
	cout<<"enter the value of n: ";
	cin>>n;
	
	temp=0;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=10;j++)
		{
		    cout<<"\t"<<n+temp;
		    temp+=n;
		}
		cout<<endl;
	}
}
