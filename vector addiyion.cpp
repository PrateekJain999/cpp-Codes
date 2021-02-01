#include<iostream>
using namespace std;

class vector_addition
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
		vector_addition()
		{
			km=0;
			m=0;
		}
		vector_addition(int a,int b)
		{
			km=a;
			m=b;
		}
		void display()
		{
			cout<<"km: "<<km<<" m: "<<m<<"";
		}
		vector_addition operator +(vector_addition x2)
		{
			vector_addition v;
			
			v.km = km + x2.km;
			v.m = m + x2.m;
			v.check();
			return v;
		}
};
main()
{
	vector_addition x1;
	vector_addition x2(1037,34);
	vector_addition x3(23,7393);
	x1=x2+x3;
	x1.display();

}
