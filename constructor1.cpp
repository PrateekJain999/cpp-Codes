#include<iostream>
#include<conio.h>
using namespace std;
class rectangle
{
	private:
		int length,breadth;
		public:
			rectangle(int a,int b)
		{
			length=a;
			breadth=b;
		}
		int area()
		{
			return(length*breadth);
		}
};
int main()
{
	rectangle r1(5,6);
	rectangle r2(7,8);
	cout<<"Area of rectangle 1:"<<r1.area()<<endl;
	cout<<"area of rectangle 2:"<<r2.area()<<endl;
	getch();
}


