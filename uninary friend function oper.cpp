#include<iostream>
using namespace std;

class lenghth
{
	int km,m;
	void check()
	{
		if(m>1000)
		{
			km+=m/1000;
			m=m%1000;
		}
	}
	public:
		lenghth()
		{
			cout<<"enter the distance in km: ";
			cin>>km;
			cout<<"enter the disatnce in m: ";
			cin>>m;
			
		}
		void display()
		{
			cout<<"new km: "<<km<<" new m: "<<m<<"";
			
		}
	friend lenghth operator++(lenghth &a);
};
lenghth operator++(lenghth &a)
{
	++a.km;
	++a.m;
	a.check();
	return a;
}
main()
{
	lenghth d1;
	++d1;
	d1.display();
	
}
