#include<iostream>
#include<fstream>
using namespace std;
int main()
{
        ifstream  fin("CC.txt");
        char ch;
        int i, c=0, sp=0;
        while(fin)
        {
                fin.get(ch);
                i=ch;
                if((i > 63 && i < 91) || (i > 96 && i < 123))
                        c++;
                else
                        if(ch== ' ')
                                sp++;
        }
        cout<<"\n No. of Characters in a File : "<<c;
        cout<<"\n Space between the Words     : "<<sp;
        return 0;
}
