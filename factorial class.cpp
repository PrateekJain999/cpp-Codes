#include<iostream>
using namespace std;
class Ac
{
	public:
		int i,n,fact;
		void gn()
		{
			cout<<"Enter the number";
			cin>>n;
		}
		void fact()
		{
			fact=1;
			for(i=1;i<=n;i++)
			{
				fact=fact*i;
			}
			cout<<"factorial is "<<fact;
		}
};
main()
{
	Ac o;
	o.gn();
	o.fact();
}
