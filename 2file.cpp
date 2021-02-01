#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream cc("cloud.txt");
    if(!cc.is_open())
    {
        cout<<"not created"<<endl;
    }
    else
    {
        cc<<"My first lappy is Apple";
        cc.close();
        cout<<"Created";
    }
}
