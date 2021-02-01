#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
main()
{
	ifstream a("CC.txt");
	string p;
	int count=0,count1=0;
	
	a>>p;
	while(!a.eof())
	{
	    if(p=="HE")
		{
			 count++;
		}
		else if(p=="SHE")
		{
			 count1++;
		}
			a>>p;
	}
	
	cout<<"HE: "<<count<<endl;
	cout<<"SHE: "<<count1;
}
