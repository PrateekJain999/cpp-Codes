#include<iostream>
using namespace std;

class conversion
{
	int hour,min,sec;
	
	public:
		void input()
		{
			cout<<"enter the value of sec:";
			cin>>sec;
		}
		
		void output()
		{
			hour=sec/3600;
			min=(sec%3600)/60;
			sec-= (hour*3600)+(min*60);
			
			cout<<"\n is equal to ["<<hour<<" hour :: "<<min<<" min :: "<<sec<<" sec ]"<<endl;
		}
};

main()
{
	conversion c;
	
	c.input();
	c.output();
}
