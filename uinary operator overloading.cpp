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
			cout<<"total km: "<<km<<" \n total m: "<<m<<"";
		}
		void operator ++()
		{
			if(m>1000)
	        {
		        km+=m/1000;
				m=m%1000;
         	}
		}
};
	
main()
{
	length d1;
	d1.getdata();
	++d1;
	d1.putdata();
}
