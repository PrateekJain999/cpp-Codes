#include<iostream>
using namespace std;

class student
{
	string name;
	int roll_no;
	
	public:
		student(string aname, int aroll_no)
		{
			name=aname;
			roll_no=aroll_no;
			
			cout<<"the name of student is: "<<name<<""<<endl<<"roll no of the student: "<<roll_no<<"";
		}
};
main()
{
	student s("john",2);
}
