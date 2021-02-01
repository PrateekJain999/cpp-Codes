#include<iostream>
#include<string>

using namespace std;

class student
{
	int roll_no;
	char name[30];
	
	public:
		
		void input()
		{
			cout<<endl;
			cout<<"name:";
			cin>>name;
			cout<<"roll no:";
			cin>>roll_no;
		}
		void output()
		{
			cout<<"\nstudent details:"<<endl;
			cout<<endl;
			cout<<"student name= "<<name<<""<<endl;
			cout<<"student roll no.="<<roll_no<<""<<endl;
		}
};

int main()
{
	int n,i;
	
	cout<<"enter the value of student number details:";
	cin>>n;
		   
	cout<<endl<<"enter the details of student:"<<endl;
	
	student s[50];
	
	for(i=0;i<n;i++)
	{
		s[i].input();
	}
	
	for(i=0;i<n;i++)
	{
		s[i].output();
	}
	return 0;
} 
