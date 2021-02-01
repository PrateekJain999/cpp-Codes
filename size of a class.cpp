#include<iostream>
using namespace std;
class Insect
{
public:

    void fly()
    {
        cout<<"Insect Fly"<<endl;
    } 
	
};

main()
{
	Insect o;
   cout<<"size: "<<sizeof(o);
}

