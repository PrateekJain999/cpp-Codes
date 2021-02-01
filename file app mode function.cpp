#include<iostream>
#include<string>
#include<fstream>
using namespace std;

main()
{
	fstream a("it2.txt",ios::in|ios::app);
	
	a<<" hi prashuk jain";
	cout<<a.tellg();   // printing the current position ie. it actually exists before writing above statement
}
