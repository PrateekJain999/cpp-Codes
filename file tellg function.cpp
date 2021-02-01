 #include<iostream>
#include<string>
#include<fstream>
using namespace std;

main()
{
	fstream a("it.txt");
	
	a.seekg(7);
    
	cout<<a.tellg();
}
