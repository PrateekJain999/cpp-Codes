#include <iostream>
using namespace std;
int main()
{
    string givenStr="Computer Science";
    char charToCheck='i';
    int count=0;
    cout<<"Given String = "<<givenStr;
    for (int i=0;i<givenStr.size();i++)
    {
        if (givenStr[i]==charToCheck)
        {
              ++count;
        }
    }
    cout<<"\n==============================="<<endl;
    cout<<charToCheck<<" Occured "<<count<<" Times.";
    return 0;
}
