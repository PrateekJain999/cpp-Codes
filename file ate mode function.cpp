#include<iostream>
#include<string>
#include<fstream>
using namespace std;

main()
{
	fstream a("it2.txt",ios::in|ios::ate);
	
	cout<<a.tellg();
}
