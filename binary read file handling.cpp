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
		void display()
		{
			cout<<"name: "<<name<<endl;
			cout<<"roll no: "<<no;
		}
};
main()
{
	data d;
	ifstream a("binar.txt",ios::binary);
	
	do
	{
		a.read((char*)&d,sizeof(d));
		d.display();
		cout<<endl;
	}
	while(a);
	a.close();
}
