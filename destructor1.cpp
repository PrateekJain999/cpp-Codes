#include<iostream>
#include<conio.h>
using namespace std;
class add
{
	private:
		int num1,num2,num3;
		public:
			add(int=0,int=0);
			void sum();
			void display();
			~add();  //destructor
};
add::~add()
{
   //num1=num2=num3=0;
	cout<<"After the final execution, the object will enter the destructor to destry itself"<<endl;
	
}
add::add(int n1, int n2)
{
	num1=n1;
	num2=n2;
	num3=0;
}
void add::sum()
{
	num3=num1+num2;
}
void add::display()
{
	cout<<"sum of two numbers:"<<num3<<endl;
}
int main()
{
	add obj1, obj2(5),obj3(10,20);
	obj1.sum();
	obj2.sum();
	obj3.sum();
	cout<<"Using obj1:"<<endl;
	obj1.display();
	cout<<"using obj2:"<<endl;
	obj2.display();
	cout<<"using obj3:"<<endl;
	obj3.display();
}
