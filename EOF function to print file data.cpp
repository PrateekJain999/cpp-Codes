#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	//fstream a("it.txt",ios::in);
	ifstream a("it.txt");
	string p;
	
	a>>p;
	while(a.eof()==0)
	{
		cout<<p<<" ";
		a>>p;
	}
}
