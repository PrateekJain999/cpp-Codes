#include<iostream>
using namespace std;

class cc
{
	int id;
	string name;
	
	public:
		cc( string b,int a)
		{
			id = a;
			name =b;
			
			cout<<"name: "<<name<<""<<endl<<"id: "<<id<<"";
		}
};
int main()
{
	cc o("prateek", 50);
	return 0;
}
