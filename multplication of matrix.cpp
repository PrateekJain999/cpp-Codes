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
	
	cout<<"enter the value of matrix B";
		
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>B[i][j];
		}
	}
	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			C[i][j]=0;
			for(k=0;k<3;k++)
			{ 
				C[i][j]=C[i][j]+(A[i][k]*B[k][j]);
			}
		}
	}
	
	cout<<"multiplication matrix of c is: "<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<"" <<C[i][j] << ""<<"\t";
		}cout<<endl;
	}
	
	
}
