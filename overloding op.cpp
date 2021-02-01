#include<iostream>
using namespace std;
int main();
class matrix
{
	int aar[10][10],i,j,k;
	
	public:
		matrix()
		{
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					aar[i][j]=0;
				}
			}
		}
		void getdata()
		{
			
			cout<<endl<<endl<<"enter the A of3 row * 3 column matrix:"<<endl;
			
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>aar[i][j];
				}
			}
		}
		
		matrix operator *(matrix x)
		{
			matrix c;
			for(c.i=0;c.i<3;c.i++)
			{
				for(c.j=0;c.j<3;c.j++)
				{
					c.aar[c.i][c.j]=0;
					for(c.k=0;c.k<3;c.k++)
					{
						c.aar[c.i][c.j] = c.aar[c.i][c.j] + aar[c.i][c.k]*x.aar[c.k][c.j];
					}
				}
				
			}
			return (c);
		}
		void show()
		{
				cout<<endl<<endl<<"multiplication of a matrix is: "<<endl<<endl;
			
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<" "<<aar[i][j];
				}
				cout<<endl;
			}
		}
	
};
main()
{
	cout<<"NAME: PRATEEK JAIN\tUID: 17BCS4110\t\tBATCH: CLOUD COMPUTING ( CC-2 )\n\n";
	matrix m1,m2,m3;
    m1.getdata();
    m2.getdata();
    m3= m1*m2;
    m3.show();
}
