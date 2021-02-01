#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

main()
{
	ofstream a("file.txt");
	
	
	string ch;
	
	//cin>>data;
	getline(cin,ch);
	a<<ch;
	
	ifstream b("file.txt");
	string data;
	while(!b.eof())
	{
		b.get(data);
	}

	
}
