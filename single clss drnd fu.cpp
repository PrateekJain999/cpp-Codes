#include<iostream>
using namespace std;
class duration1
{
	int hr1,min1,sec1;
	
	public:
	void input1()
	{
		cout<<"enter 1st hours";
		cin>>hr1;
		cout<<endl<<"enter 1st min";
		cin>>min1;
		cout<<endl<<"enter 1st sec";
		cin>>sec1;
		
	}
	void display()
	{
		cout<<endl<<"enterted time is: ";
		cout<<endl<<endl<<"hour= "<<hr1<<" : min="<<min1<<" : sec= "<<sec1<<"";
	}
	friend void sum(duration1,duration1 );
};
void sum(duration1 o1,duration1 o2)
{
	int total_hour,total_min,total_sec;
	
	total_hour= o1.hr1 +o2.hr1;
	total_min= o1.min1 +o2.min1;
	total_sec= o1.sec1 +o2.sec1;
	 
	cout<<"total time is:"<<endl<<endl<<"total hour: "<<total_hour<<""<<endl<<"total min: "<<total_min<<""<<endl<<"total sec: "<<total_sec<<""; 
}
main()
{
	duration1 d1,d2;
	d1.input1();
	d1.display();
	d2.input1();
	d2.display();
	sum(d1,d2);
}
