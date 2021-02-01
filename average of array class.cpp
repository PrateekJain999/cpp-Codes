#include<iostream>
using namespace std;

class average
{
	int a[100],n,i,sum=0;
	float avg;
	public:
		void input()
		{
			cout<<"enter the no of array element: ";
			cin>>n;
			cout<<"enter the array element:";
			
			for(i=0;i<n;i++)
			{
				cin>>a[i];
			}
			for(i=0;i<n;i++)
			{
				cout<<"a["<<i<<"]="<<a[i]<<""<<endl;
			}
		}
		void output()
		{
			for(i=0;i<n;i++)
			{
				sum+=a[i];
			}
			avg=sum/n;
			
			cout<<"average of n array element is: "<<avg<<"";
		}
		
};
main()
{
	average p;
	p.input();
	p.output();
}
