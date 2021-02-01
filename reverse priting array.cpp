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

    cout<<"the array in reverse order are: "<<endl;

	for(i=n-1;i>=0;i--)
		{
			cout<<"a["<<i<<"] : "<<a[i]<<endl;
		}
	
}
