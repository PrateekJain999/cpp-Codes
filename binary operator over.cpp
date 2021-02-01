#include<iostream>
using namespace std;

class increment
{
	int x,y,z;
	public:
		void getdata(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"x: "<<x<<endl;
			cout<<"y: "<<y<<endl;
			cout<<"z: "<<z<<endl;
		}
		increment operator+(increment c);
};
increment increment::operator+(increment c)
{
	increment temp;
	
	temp.x = x * c.x;
	temp.y = y * c.y;
	temp.z = z * c.z;
	return temp;
}
main()
{
	increment o1,o2,o3;
	o1.getdata(4,6,7);
	o2.getdata(1,2,3);
	o3= o1 + o2;
	o3.display();
}
