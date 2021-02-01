#include<iostream>
#include<conio.h>
using namespace std;
#include<fstream>
int main()
{
    char ch; 
ofstream outfile;
outfile.open("abc.txt");
while(ch!='.')
{
  //ch=getche();
  cin>>ch;
  outfile.put(ch);
}
outfile.close();
ofstream out;
out.open("abc1.txt");
ifstream iff("abc.txt");
while(!iff.eof())
{
          ch=iff.get();
          out.put(ch);
          }

cout<<"data saved";
out.close();
iff.close();
getch();
return 0;
}

              

