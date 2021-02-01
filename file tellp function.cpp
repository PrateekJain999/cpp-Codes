#include<iostream>
#include<string>
#include<fstream>
using namespace std;

main()
{
	fstream a("it2.txt");
	
	a<<"ram prakesh jain";
	
	cout<<a.tellp();cout<<endl;
	cout<<a.tellg();
}
