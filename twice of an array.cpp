#include<iostream>
using namespace std;

main()
{
	int A[100],i,n;
	
	cout<<"enter the value of no. of array elements: ";
	cin>>n;
	
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	}
	
	cout<<"the entered array elements are: "<<endl;
	
	for(i=0;i<n;i++)
	{
	     cout<<"A["<<i<<"] : "<<2*A[i]<<" ";
		 cout<<endl;
	}
	
}
