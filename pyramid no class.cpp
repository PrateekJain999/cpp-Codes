#include<iostream>
using namespace std;

class pyramid
{
	int n, i ,j;
	
	public:
		void input()
		{
			cout<<"enter the value of n";
			cin>>n;
		}
		void output()
		{
			for(i=i;i<=n;i++)
			{
				for(j=1;j<=n;j++)
				{
					if(j<n)
					{
						cout<<"  ";	
					}
				
					if(i==j)
				{
					cout<<"d";
				}
				
				}cout<<endl;
	
			}
		}
};
main()
{
	pyramid p;
	p.input();
	p.output();
}
