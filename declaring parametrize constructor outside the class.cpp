#include<iostream>
using namespace std;

class student
{
	int id;
	string name;
	
	public:
		student(int a, string b);
};
student::student(int a, string b)
{
	id = a;
	name =b;
			
	cout<<"name: "<<name<<""<<endl<<"id: "<<id<<"";
}
main()
{
	student s(11710356,"prateek");
}
