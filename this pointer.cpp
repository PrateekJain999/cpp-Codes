#include<iostream>
using namespace std;
class MyClass 
{

	public:
	int data;
	void Print1(int);
	void print2();
	
};
void MyClass::Print1(int data) 
{
	this->data=data;
	//(*this).data=data;
	cout<<data<<endl;
}
void MyClass::print2()
{
	cout<<this<<endl;
}
int main()
{
	MyClass a;	
	a.Print1(100);
	a.print2();	
	cout<<&a<<endl;
	cout<<a.data;
}

