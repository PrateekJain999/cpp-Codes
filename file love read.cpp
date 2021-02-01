#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	string data;
	
	ifstream PK("love.txt");
	PK>>data;
	if(PK.is_open())
	{
		while(!PK.eof())
		{
			cout<<data<<" ";
			PK>>data;
		}
	}
}
