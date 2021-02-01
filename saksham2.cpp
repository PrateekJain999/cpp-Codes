#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ifstream cc;
	cc.open("beta.txt");
	string loda;
	
	
		getline(cc,loda);
		cout<<loda<<endl;
	
}
