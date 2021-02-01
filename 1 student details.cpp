#include<iostream>
#include<string>

using namespace std;

class student
{
    int roll_no;
	char name[20];
		
	public:
		
		void input()
		{
			cout<<"enter the details of student:"<<endl;
			cout<<"name:";
			cin>>name;
			cout<<"roll no:";
			cin>>roll_no;
		}
		void output()
		{
			cout<<"\nstudent details:"<<endl;
			cout<<"student name= "<<name<<""<<endl;
			cout<<"student roll no.="<<roll_no<<""<<endl;
		}
};

int main()
{
	student s;
	
	s.input();
	s.output();

    return 0;
}
