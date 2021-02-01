#include<iostream>
using namespace std;

main()
{
	int A[5],B[5],i,j;
	
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
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(A[i]==B[j])
			{
				cout<<"A["<<i<<"]=B["<<j<<"] : "<<A[i];
				cout<<endl;
			}
		}
	}
}
