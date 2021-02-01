#include<iostream>
using namespace std;
main()
{
	int i=1,n,j=1;
	cout<<"enter the no of row: ";
	cin>>n;
	cout<<endl<<endl;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<"@";
		}
		cout<<endl;
	}
	
}
