#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	ifstream PK("monkey.txt");
	
	int a;
	string b,c;
	
	while(PK>>b>>c>>a)
	{
		cout<<b<<" "<<c<<" "<<a<<endl;	
	}
}
