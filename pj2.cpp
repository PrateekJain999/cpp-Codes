#include<iostream>
#include<fstream>
#include<string>
using namespace std;

main()
{
	string name;
	int no,age;
	
	ifstream a("pj.txt");
	
while(a >>no>>name>>age)
    	{
		cout<<no<<name<<age<<endl;
	    }
	    
	   a.close();
	
	
}
