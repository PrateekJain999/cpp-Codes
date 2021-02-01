#include<iostream>
#include<string>
#include<fstream>
using namespace std;

main()
{
	fstream a("it.txt");
	
	a.seekp(8);
	a<<"jaim";
}
