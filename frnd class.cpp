#include<iostream>
using namespace std;
class duration2;
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
	friend void sum(duration1,duration2);
};
class duration2
{
	int hr2,min2,sec2;
	
	public:
	void input2()
	{
		cout<<endl<<"enter 2nd hours";
		cin>>hr2;
		cout<<"enter 2nd min";
		cin>>min2;
		cout<<"enter 2nd sec";
		cin>>sec2;
		
	}
	void display()
	{
		cout<<endl<<"enterted time is: ";
		cout<<endl<<endl<<"hour= "<<hr2<<" : min="<<min2<<" : sec= "<<sec2<<"";
	}
	friend void sum(duration1,duration2);
};
void sum(duration1 o1, duration2 o2)
{
	int total_hour,total_min,total_sec;
	
	total_hour= o1.hr1 +o2.hr2;
	total_min= o1.min1 +o2.min2;
	total_sec= o1.sec1 +o2.sec2;
	 
	cout<<"total time is:"<<endl<<endl<<"total hour: "<<total_hour<<""<<endl<<"total min: "<<total_min<<""<<endl<<"total sec: "<<total_sec<<""; 
}
main()
{
	duration1 d1;
	duration2 d2;
	d1.input1();
	d1.display();
	
	d2.input2();
	d2.display();
	sum(d1,d2);
}
