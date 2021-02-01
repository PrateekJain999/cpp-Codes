#include<iostream>
using namespace std;

main()
{
	int n,i,a[100];
	
	
	cout<<"enter the no of array elements:";
	cin>>n;
			
	for(i=0;i<n;i++)
		{
			cin>>a[i];
		}

    cout<<"the even array are: "<<endl;

	for(i=0;i<n;i++)
		{
			if(a[i]%2==0)
			{
				cout<<"a["<<i<<"] : "<<a[i]<<endl;
			}
		}
	
}
