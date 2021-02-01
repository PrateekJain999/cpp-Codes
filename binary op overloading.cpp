#include<iostream>
using namespace std;

class increment
{
	int x,y,z;
	public:
		increment()
		{
			
		}
		increment(int a,int b,int c)
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
		increment operator --()
		{
			increment temp;       //we can use this without temporary obj.
			
			temp.x=--x;
			temp.y=++y;
			temp.z=--z;
			
			return temp;
		}
};
main()
{
	increment o(5,6,7);
	cout<<"before operator overloading: "<<endl;
	o.display();
	cout<<endl<<"after operator overloading";
	--o;
	o.display();
}
