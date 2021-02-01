#include<iostream>
using namespace std;

int main () 
{
     try
     {
          throw 'e';
     }
     catch (char e)
     {
          cout << "\n Exception Caught '"<<e<<"'"<<endl;
     }
     return 0;
}

