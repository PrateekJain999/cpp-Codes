#include<iostream>
using namespace std;

class vector_addition
{
	public:                                                       //not working in private of protected accessspecifer..
	int km,m;
	void check()
	{
		if(m>1000)
		{
			km+=m/1000;
			m=m%1000;
		}
	}
	
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
		friend vector_addition operator +(vector_addition a, vector_addition b);
};
vector_addition operator + (vector_addition a,vector_addition b)
		{
			vector_addition v;
			
			v.km = a.km + b.km;
			v.m = a.m + b.m;
			v.check();
			return v;
		}
main()
{
	vector_addition x1(23,7393);
	vector_addition x2(1037,34);
	vector_addition x3;
	x3=x1+x2;
	x3.display();

}
