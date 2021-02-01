#include<iostream>
using namespace std;

class adding
{
	int total_sec,f_hour,f_min,f_sec,hour1,hour2,min1,min2,sec1,sec2;
	
	public:
		void input1()
		{
			cout<<"enter the first time in the format HH::MM::SS"<<endl;
			cin>>hour1>>min1>>sec1;
		}
		void input2()
		{
			cout<<"enter the second time in the format HH::MM::SS"<<endl;
			cin>>hour2>>min2>>sec2;
		}
		void output()
		{
			total_sec = (hour1*3600)+(min1*60)+(sec1)+(hour2*3600)+(min2*60)+(sec2);
			f_hour=(total_sec)/3600;
			f_min=(total_sec - f_hour*3600)/60;
			f_sec=(total_sec - f_hour*3600 - f_min*60);
			
			cout<<"the final adding time is HH:MM:SS = "<<f_hour<<"::"<<f_min<<"::"<<f_sec<<" ";
		}
};
main()
{
	adding a;
	a.input1();
	a.input2();
	a.output();
}
