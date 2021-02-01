#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	ofstream PK("cloud.txt");
	
	PK<<"hlw pk 999748";
	cout<<"file created";
	
	PK.close();
}
