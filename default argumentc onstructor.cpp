#include<iostream>
#include<conio.h>
using namespace std;
class add
{
	private:
		int num1,num2,num3;
	public:
		add()
		{
			cout<<"default constructor at work:"<<endl;
		}
		
		add(int a)
		{
			num3=a;
			cout<<"value of num3:"<<a<<endl;
		}
		add(int n1,int n2)  //default argument constructor
		{
			num1=n1;
			cout<<"value of num1:"<<n1<<endl;
			num2=n2;
			cout<<"value of num2:"<<n2<<endl;
		}
		
		void sum()
		{
			num3=num1+num2;
		}
		void display()
		{
			cout<<"sum of two numbers:"<<num3<<endl;
		}	
};

int main()
{
	add obj1,obj2(5),obj3(10,20);
}
		
