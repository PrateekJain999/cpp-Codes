#include<iostream>
using namespace std;

class transpose
{
	int i,j,A[3][3];
	
	public:
		void input()
		{
			cout<<"enter the element of a matrix:";
			
			for(i=1;i<=3;i++)
			{
				for(j=1;j<=3;j++)
				{
					cin>>A[i][j];
				}
			}
		}
		void output()
		{
			cout<<"the transpose of A matrix is :"<<endl;
			
			for(i=1;i<=3;i++)
			{
				for(j=1;j<=3;j++)
				{
					cout<<"  "<<A[j][i]<<" ";
				}
				cout<<endl;
			}
		}
};
main()
{
	transpose t;
	t.input();
	t.output();
}
