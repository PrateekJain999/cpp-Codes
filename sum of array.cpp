#include<iostream>
using namespace std;

main()
{
	int n,i,a[100],sum;
	
	cout<<"enter the no of array elements:";
	cin>>n;
			
	for(i=0;i<n;i++)
		{
			cin>>a[i];
		}

    cout<<"the sum of array is: "<<endl;
    sum=0;
    
	for(i=0 ; i<n ; i++)
		{
			sum=sum+a[i];
		}
	cout<<"sum= "<<sum<<"";
}
