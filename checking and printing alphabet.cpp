#include<iostream>
#include<string.h>
using namespace std;

main()
{
	char line[100];
	int i;
	
	cout<<"enter the string A: ";
	gets(line);
	
	for(i=0;line[i]!='\0';i++)
	{
		if((line[i]>='a' || line[i]<='z') || (line[i]>='A' || line[i]<='Z'))
		{
			cout<<line[i];
		}
		else
		{
			cout<<" ";
		}
	}
}
