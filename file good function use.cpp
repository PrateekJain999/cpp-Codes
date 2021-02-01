#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	fstream a("it.txt",ios::in);
	string data;
	
	while(a.good())
	{
		getline(a,data);
		cout<<data;
	}
}
