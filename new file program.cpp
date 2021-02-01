#include<iostream>
#include<string>
#include<fstream>
using namespace std;
main()
{
    string Data;
    ifstream cc;
    cc.open("monkeys.txt");
    //cc>>Data;
    if(cc.is_open())
    {
    	while(getline(cc,Data))
        {
            cout<<Data;
            
        }
		cc.close();
	}
    
}
