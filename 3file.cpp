#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ifstream cc;
    cc.open("cloud1.txt");
    if(!cc.is_open())
    {
        cout<<"unable to open file";
    }
    else
    {
        cout<<"Content is read"<<endl<<endl;
        string data;
        getline(cc,data);
        cout<<data<<endl;
    }
}
