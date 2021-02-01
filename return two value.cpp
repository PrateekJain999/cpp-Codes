#include<iostream>
using namespace std;

int fun(int &a,int &b)
{
	return a,b;
}
main()
{
	int x,y;
	
	cout<<" enter the value of x: "<<endl;
	cin>>x;
	cout<<" enter the value of y: "<<endl;
	cin>>y;
	cout<<fun(x,y);

}
