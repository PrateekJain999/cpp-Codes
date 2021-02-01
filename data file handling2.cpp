#include<iostream>
#include<conio.h>
using namespace std;
#include<fstream>
int main()
{
 char name[20],n[30];
 int roll_no,r;
 cout<<"enter name";
 cin>>name;
 cout<<"enter roll_no";
 cin>>roll_no;
 ofstream outfile;
 outfile.open("abc.txt");
 outfile<<name;
 outfile<<" ";
 outfile<<roll_no;
 cout<<"data saved";
 outfile.close();
 ifstream infile;
 infile.open("abc.txt");
 
 infile>>name;
 infile>>roll_no;
cout<<name<<endl<<roll_no<<endl;

infile.close();
 
 getch();
 return 0;
}

