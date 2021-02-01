#include<iostream>
#include<string>
#include<fstream>
using namespace std;
main()
{
    string Data;
    ifstream pk("it.txt");
    pk>>Data;
    if(pk.is_open())
    {
    	while(!pk.eof())
        {
            cout<<Data<<" ";
            pk>>Data;
        }
		pk.close();
	}
    
}
