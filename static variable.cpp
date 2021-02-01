#include<iostream>
using namespace std;
void func()
{
	static int j=0;
	
	j++;
	cout<<j<<endl;
}
main()
{
	func();
	func();
	func();
	
	
}

