#include<iostream>
using namespace std;
main()
{
	int A[3][3],B[3][3],C[3][3];
	int i,j,k;
	
	cout<<"enter the value of matrix A";
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>A[i][j];
		}
	}
	cout<<endl;
	cout<<"the diagonal matrix of A matrix is: "<<endl;
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				cout<<A[i][j];
			}
			else
			{
				cout<<"   ";
			}
		}
		cout<<endl;
	}
	

	
	
}
