#include<iostream>
using namespace std;


main()
{
	int n,i,a[100],large,small;
	
	
	cout<<"enter the no of array elements:";
	cin>>n;
			
	for(i=0;i<n;i++)
		{
			cin>>a[i];
		}

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
