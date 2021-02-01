#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	char ch;
    ofstream file;
   
    file.open("aa.txt");
  
    file<<"welcome to lpu";
      file.seekp(-5,ios::end);
      file<<"hello";
    int position=file.tellp();
    cout<<position;
    file.close();
    ifstream iff;
    iff.open("aa.txt");
    while(iff.eof()==0)
    {
    	iff.get(ch);
    	cout<<ch;
	}
    iff.close();
    
    getch();
    return 0;
}
    

