#include<iostream>
using namespace std;

main()
{
	int a,b,c;
	
	cout<<"enter the value of a,b,c"<<endl;
	cin>>a>>b>>c;
	
	((a>b)&&(a>c))?cout<<"a="<<a<<" is greatest no." : ((b>a)&&(b>c))? cout<<"b="<<b<<" is greatest no." : cout<<"c="<<c<<" is the greatest no.";
}
