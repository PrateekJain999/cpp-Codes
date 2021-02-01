#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	string data;
	
	ifstream PK("pk.txt");
	PK>>data;
	if(PK.is_open())
	{
		while(getline(PK,data))
		{
			cout<<data<<endl;
			PK>>data;
		}
		PK.close();
	}
}
