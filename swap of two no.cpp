#include<iostream>
using namespace std;

main()
{
	int x,y;
	
	cout<<" enter the value of x: "<<endl;
	cin>>x;
	cout<<" enter the value of y: "<<endl;
	cin>>y;
	
	x=x+y;
	y=x-y;
	x=x-y;
			
	cout<<"after swapping of no the value of x and y is: "<<endl;
	cout<<"x:"<<x<<endl;
    cout<<"y:"<<y<<endl;
}
