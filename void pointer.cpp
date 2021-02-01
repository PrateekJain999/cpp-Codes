/******************************* void pointers *************************************/
#include<iostream>
using namespace std;
main()
{
	int i; 
	char c;
 	void *data; 
	i = 6; 
	c = 'a';
 	data = &i; 
	cout<<"the_data points to the integer value  "<< *(int*) data<<endl;;
 	data = &c; 
	cout<<"the_data now points to the character "<< *(char*) data; 	
}

