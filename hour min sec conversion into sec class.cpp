#include<iostream>
using namespace std;

class conversion
{
	int hour,min,sec,total_sec;
	
	public:
		void input()
		{
			cout<<"enter the value of hour, min and sec:";
			cin>>hour>>min>>sec;
			
			cout<<"hour::min::sec == "<<hour<<"::"<<min<<"::"<<sec<<""<<endl;
		}
		
		void output()
		{
			total_sec = (hour*3600)+(min*60)+(sec);
			cout<<"\n\nis equal to "<<total_sec<<" sec"<<endl;
		}
};

main()
{
	conversion c;
	
	c.input();
	c.output();
}
