#include<iostream>
#include<exception>
using namespace std;

main()
{
	int z,x,y;
	
	cout<<"enter the value x and y : ";
	    cin>>x>>y;
	
	try
	{
		if(y==0)
		throw 8;
		z=x/y;
		cout<<z;

	}
	catch(int p)
	{
		cout<<p;
	}
}
