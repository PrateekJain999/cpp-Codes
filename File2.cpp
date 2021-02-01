#include<iostream>
#include<string>
#include<fstream>
using namespace std;
main()
{
    string Data;
    ifstream cc;
    cc.open("monkeys.txt");
    cc>>Data;
    while(!cc.eof())
    {
        cout<<Data<<" ";
        cc>>Data;
        
    }cc.close();
}
