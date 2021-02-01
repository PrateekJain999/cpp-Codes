#include<iostream>
using namespace std;

class conversion
{
	private:
	    float far,cel;
	
	public:
		void input()
		{
			cout<<"enter the temperature in degree celsius: ";
			cin>>cel;
		}
		void output()
		{
			far=(9*cel)/5 + 32;
			cout<<"the temperature in degree fahrenheit is : "<<far<<"";
		}
};
main()
{
	conversion c;
	c.input();
	c.output();
}
