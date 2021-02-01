#include<iostream>
#include<string>
#include<stdio.h>
using namespace std;

main()
{
	int i,Vowel=0,Consonant=0,Digit=0,Space=0;
	char line[100];
	
	cout<<"enter the string line:  ";
	gets(line);
	
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' || line[i]=='A' ||
           line[i]=='E' || line[i]=='I' || line[i]=='O' ||
           line[i]=='U')
        {
            ++Vowel;
        }
        else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
        {
            ++Consonant;
        }
        else if(line[i]>='0' && line[i]<='9')
        {
            ++Digit;
        }
        else if (line[i]==' ')
        {
            ++Space;
        }
	} 
	
	cout<<"vowels: "<<Vowel<<endl;
	cout<<"digit: "<<Digit<<endl;
	cout<<"consonant: "<<Consonant<<endl;
	cout<<"space: "<<Space<<endl;
}
