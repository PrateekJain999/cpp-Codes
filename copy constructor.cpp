#include<iostream>
using namespace std;

class student
{
	int id;
	string name;
	
	public:
		student(string a,int b)
		{
			id=b;
			name=a;
		}
		void output();
};
void student::output()
{
	cout<<endl<<endl<<"the details of student is: ";
	cout<<endl<<"name: "<<name<<""<<endl<<"id: "<<id<<"";
}
main()
{
	student s("prateek",11710356);
	s.output();
	student s1(s);
	s1.output();
}
