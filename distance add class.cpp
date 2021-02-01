#include<iostream>

using namespace std;

class distance
{
		int x,y;
		
	public:
		void number()
		{
			cout<<"enter two numbers"<<endl;
			cin>> x >> y;
		}
		
		void add()
		{
			cout<<"sum of distance="<<x+y;
		}
};

int main()
{
	distance d;
	d.number();
	d.add();
	
	return 0;
}
