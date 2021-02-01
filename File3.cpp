#include<iostream>
#include<string>
#include<fstream>
using namespace std;
main()
{
    string Data;
    ifstream cc;
    cc.open("monkey.txt");

    while(getline(cc,Data))
    {
        cout<<Data<<endl;

    }
}
