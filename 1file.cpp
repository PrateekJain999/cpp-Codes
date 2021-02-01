#include<iostream>
#include<fstream>
using namespace std;
main()
{
    fstream ccfile;
    
    ccfile.open("it.txt",ios::in|ios::out|ios::trunc);
   ccfile<<"prateek jain";
   if(!ccfile.is_open())
   {
       cout<<"File not created";
   }
   else
   {
       cout<<"File created";
       ccfile.close();

   }

}

