#include<iostream>
#include<string>
#include<fstream>
using namespace std;

main()
{
	fstream a("it2.txt",ios::in);
	string data;
	
	a.seekg(7);
	
	getline(a,data);
	cout<<data;
}
