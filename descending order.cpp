#include<iostream>
using namespace std;

main()
{
	int A[5],i,j,x;
	
	cout<<"enter the 5 elements of array : "<<endl;
	
	for(i=0;i<5;i++)
	{
		cin>>A[i];
	}
	
	for (i=0 ;i<5 ;i++)
	{
		for (j=0 ;j<5 ;j++)
		{
			if (A[j+1] < A[j])
			{
				x = A[j];
				A[j] = A[j + 1];
				A[j + 1] = x;
			}
		}
	}


	cout<<"Descending order: "<<endl;
	
	for (i=5 ; i>0 ; i--)
	{
		cout<<"\t"<<A[i-1];
	}
}
