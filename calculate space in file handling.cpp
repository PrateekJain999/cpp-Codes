#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
main()
{

    fstream a;
    char ch;              
    int count=0;

    a.open("CC.txt",ios::in);
                            
    while(!a.eof())
    {
        a.get(ch);
                     
        if(ch == ' ')
        count++;
    }

    a.close();
              
    cout << "\nTotal blank spaces : " << count;
}
