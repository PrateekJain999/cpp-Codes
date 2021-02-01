#include<iostream>
#include<fstream>
using namespace std;

main()
{
	ofstream a("CC.txt");
	string data;
	int n,i=1;
	
   cout<<"enter the value until which you want to enter the digits in file: ";
   cin>>n;
   
   for(i=1;i<=n;i++)
   {
   	    a<<i;
   }
    
	cout<<"data will be printed in file: ";
}
