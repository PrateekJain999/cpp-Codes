#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
class data
{
	int no;
	char name[100];
	public:
		data()
		{
			strcmp(name,"");
			no=0;
		}
		void getdata()
		{
			cout<<"enter the name: ";
			cin>>name;
			cout<<"enter the roll no: ";
			cin>>no;
		}
};
main()
{
	char choice;
	data d;
	ofstream a("binar.txt",ios::binary);
	
	do
	{
		d.getdata();
		a.write((char*)&d,sizeof(d));
		cout<<"if you want to continue choose y or n for exit";
		cin>>choice;
	}
	while(choice=='y'||choice=='Y');
	a.close();
}
