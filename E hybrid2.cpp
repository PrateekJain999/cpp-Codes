#include<iostream>
using namespace std;
class Insect
{
public:
    int age;
    void fly()
    {
        cout<<"Insect Fly"<<endl;
    }
};
class Larva:virtual public Insect
{

};
class Caterpillar:virtual public Insect
{

};
class Butterfly:public Larva,public Caterpillar
{

};
main()
{
    Butterfly o;
    o.fly();
}

