#include<iostream>
using namespace std;

class student
{
	int id;
	char name[30];
	
	public:
		student()
		{
			cout<<"enter the name of student: ";
			cin>>name;
			cout<<"enter the id of student: ";
			cin>>id;
		}
		~student()
		{
			cout<<endl;
			cout<<endl;
			cout<<"students details: "<<endl;
			cout<<"name:- "<<name<<endl;
			cout<<"id:- "<<id;
		}
};
main()
{
	student o;
}
