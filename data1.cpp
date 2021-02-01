#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	char ch;
	ofstream out1("hi.txt");
	if(!out1)
	{
		cout<<"file not opened successfully";
		exit(-1);
	}
//	cin.get(ch);
	while(ch!='.')
	{
		cin>>ch;
		out1.put(ch);
	//cin.get(ch);
	}
	return 0;
	
}
