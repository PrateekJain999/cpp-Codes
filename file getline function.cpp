#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	ifstream a("it.txt");
	string data;
	
	while(getline(a,data))
	{
		cout<<data;
	}
}
