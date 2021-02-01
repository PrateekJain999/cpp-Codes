#include<iostream>
using namespace std;
void display()
{
static int count=0;
    cout<<"Function called for "<<++count<<" Time"<<endl;
}

main()
{
    display();
    display();
    display();
    display();
    display();
    display();

}
