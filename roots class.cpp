#include<iostream>
#include<math.h>
using namespace std;

class roots
{
	int b,a,c,d1,d2;
	
	public:
		void input()
		{
			cout<<"enter the quardatic equn coefficent a,b,c "<<endl;
			cin>>a>>b>>c;
			cout<<"equ is: "<<a<<"*x^2 + "<<b<<"*x + "<<c<<" ";
		}
		void output()
		{
			d1 = ((-b)-(sqrt(b*b-4*a*c)))/2*a;
			d2 = ((-b)+(sqrt(b*b-4*a*c)))/2*a;
			
			cout<<"the roots are d1="<<d1<<" and d2="<<d2<<"";
		}
};
main()
{
	roots r;
	r.input();
	r.output();
}
