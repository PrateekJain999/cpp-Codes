#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
main()
{
	ifstream a("it2.txt");
	char data[100];
	int salary;
	
	while(!a.eof())
	{
		a>>data;
		
		if(strcmp(data,"")==0)
		{
			 break;
		}
		else
		{
			 cout<<"name: "<<data;
			
			a>>salary;
			cout<<"  salary: "<<salary<<endl;
		}
	}
}
