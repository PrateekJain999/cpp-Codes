#include<iostream>
using namespace std;

class length
{
	int km,m;
	
	public:
		void getdata()
		{
			cout<<"enter the distance in km: ";
			cin>>km;
			cout<<"enter the disatnce in m: ";
			cin>>m;
		}
		void putdata()
		{
			cout<<"new km: "<<km<<" \n new m: "<<m<<"";
		}
		friend length operator ++(length &a);
};
length operator ++(length &a)
{
	a.km++;
	a.m++;
}
	
main()
{
	int l;
	
	length d1;
	d1.getdata();
	++d1;
	d1.putdata();
}
