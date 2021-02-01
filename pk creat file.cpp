#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	ofstream pk("@pk.txt");
	
	pk<<" i love you so much";
	cout<<"file created";
	pk.close();
}

