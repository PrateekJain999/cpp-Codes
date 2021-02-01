#include<iostream>
using namespace std;

main()
{
	int A[5],B[5],X[5],i,j,sum=0;
	
	cout<<"enter the 5 elements of Array A: ";
	
	for(i=0;i<5;i++)
	{
		cin>>A[i];
	}
	
	cout<<"enter the 5 elements of Array B: ";
	
	for(i=0;i<5;i++)
	{
		cin>>B[i];
	}
	
	cout<<"the entered array A elements are: "<<endl;
	
	for(i=0;i<5;i++)
	{
	     cout<<"A["<<i<<"] : "<<A[i];
		 cout<<endl;
	}
	
	cout<<"the entered array B elements are: "<<endl;
	
	for(i=0;i<5;i++)
	{
	     cout<<"B["<<i<<"] : "<<B[i];
		 cout<<endl;
	}
	
	cout<<endl;
	cout<<endl;
	
	cout<<"the sum two array is: "<<endl;
	
	for(i=0 ; i<5 ; i++)
		{
			sum=sum+A[i]+B[i];
		}
	cout<<"sum= "<<sum<<"";
	
}
