#include<iostream>
using namespace std;

class conversion
{
	float gallons,cubic_feet;
	
	public:
		void input()
		{
			cout<<"enter the no of gallons:";
			cin>>gallons;
		}
		void output()
		{
			cubic_feet=gallons/7.481;
			cout<<""<<gallons<<" gallons is equal to "<<cubic_feet<<"";
		}
};

main()
{
	conversion c;
	c.input();
	c.output();
}
