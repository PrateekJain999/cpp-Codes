#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	int rollno;
	char name[30];
	int marks;
	ofstream out_file("hello.txt");
	if(!out_file)
	{
		cerr<<"file cannot be opened";
		exit(-1);
	}
	cout<<"enter student name:"<<endl;
	cin>>name;
	cout<<"enter roll no:"<<endl;
	cin>>rollno;
	cout<<"enter marks:"<<endl;
	cin>>marks;
	cout<<"writing student detail onto file:"<<endl;
	out_file<<rollno<<endl;
	out_file<<name<<endl;
	out_file<<marks<<endl;
	getch();
	return 0;
}


