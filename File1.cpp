#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream CC;
    CC.open("monkey.txt");
    CC<<"hi CC";
    cout<<"created";
    CC.close();
}

