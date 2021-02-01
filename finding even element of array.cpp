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
	
	cout<<"the even element of matrix A is :"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(A[i][j]%2==0)
			{
				cout<<"A["<<i<<"]["<<j<<"]: "<<A[i][j];
				cout<<"\t";
			}
			cout<<endl;
		}
	}
	
	
	
	
}
