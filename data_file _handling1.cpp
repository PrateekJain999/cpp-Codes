#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    /*ofstream outfile;
    outfile.open("text.txt");*/
    ofstream outfile("text2.txt");
    outfile<<"how";
    outfile<<"are";
    outfile<<"you";
    outfile.close();
    cout<<"Data Saved";
    getch();return 0;
}

