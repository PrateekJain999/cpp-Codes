#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream filestream("Beta.txt");
	if(filestream.is_open())
	{
		filestream<<"welcome to C++ \n";
		filestream<<"Prateek is child of saksham\n";
		filestream.close();
	}
}
