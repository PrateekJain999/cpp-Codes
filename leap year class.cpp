#include<iostream>
using namespace std;

class leap
{
	int year;
	
	public:
		void input()
		{
			cout<<"enter the year "<<endl;
			cin>>year;
		}
		void output()
		{
			if(year%4==0)
			{
			    cout<<""<<year<<" is leap year.";	
			}
			else
			{
				cout<<""<<year<<" is not a leap year.";
			}
		}
};
main()
{
	leap l;
	l.input();
	l.output();
}
