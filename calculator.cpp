#include<iostream>
using namespace std;
main()
{
	int a,b,n,c;
	
	cout<<"enter the value of a & b";
	cin>>a>>b;
	
	cout<<"select the input"<<endl;
	cout<<"1. add"<<endl;
	cout<<"2. subtract"<<endl;
	cout<<"3. multiply"<<endl;
	cout<<"4. division"<<endl;
	
	cin>>n;
	
	switch(n)
	{
		case 1: 
		if(n==1)
		{
			c=a+b;
			cout<<"c="<<c<<"";
		}
		case 2: 
		if(n==2)
		{
			c=a-b;
			cout<<"c="<<c<<"";
		}
		case 3: 
		if(n==3)
		{
			c=a*b;
			cout<<"c="<<c<<"";
		}
		case 4: 
		if(n==4)
		{
			c=a/b;
			cout<<"c="<<c<<"";
		}
	}
}
