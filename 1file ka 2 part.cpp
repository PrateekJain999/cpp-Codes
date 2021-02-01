#include<iostream>
#include<fstream>
using namespace std;
main()
{
    ofstream ab;
    string Data;
    ab.open("Data.txt");
   ab<<"Hello hi cu";
   if(!ab.is_open())
   {
       cout<<"File not created";
   }
   else
   {
       cout<<"File created";
       ab.close();

   }

}

