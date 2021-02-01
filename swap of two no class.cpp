#include<iostream>
using namespace std;

class SWAP
{
	int x,y;
	
	public:
		void input()
		{
			cout<<" enter the value of x: "<<endl;
			cin>>x;
			cout<<" enter the value of y: "<<endl;
			cin>>y;
		}
		void output()
		{
			x=x+y;
			y=x-y;
			x=x-y;
			
			cout<<"after swapping of no the value of x and y is: "<<endl;
			cout<<"x:"<<x<<endl;
			cout<<"y:"<<y<<endl;
		}
};
main()
{
	SWAP s;
	s.input();
	s.output();
}
