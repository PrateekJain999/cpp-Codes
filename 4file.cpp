#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream cc;
    cc.open("cloud.txt");
    if(!cc.is_open())
    {
        cout<<"unable to open file";
    }
    else
    {
        cout<<"Content is read\n";
        string data;
        while(cc.good())
        {
            getline(cc,data);
        cout<<data<<endl;
        }

    }
}

