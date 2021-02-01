#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ifstream in1("hi.txt");
	if(!in1)
	{
		cout<<"file not opened successfully";
		exit(-1);
	}
//	cin.get(ch);
	while(in1.eof()==0)
	{
		//cin>>ch;
		in1.get(ch);
		cout<<ch;
	//cin.get(ch);
	}
	return 0;
	
}
