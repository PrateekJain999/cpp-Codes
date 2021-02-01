#include<iostream>
using namespace std;

class largest_smallest
{
	int n,i,a[100],large,small;
	
	public:
		void input()
		{
			cout<<"enter the no of array elements:";
			cin>>n;
			
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
		}
		void output()
		{
			large=small=a[0];
			
			for(i=1;i<n;i++)
			{
				if(a[i]>large)
				{
					large=a[i];
				}
				if(a[i]<small)
				{
					small=a[i];
				}
			}
			
			cout<<"largest of array is: "<<large<<""<<endl;
			cout<<"smallest of array is: "<<small<<"";
		}
};
main()
{
	largest_smallest A;
	A.input();
	A.output();
}
