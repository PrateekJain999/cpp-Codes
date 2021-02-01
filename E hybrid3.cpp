#include<iostream>
using namespace std;
class Insect
{
public:
    Insect()
    {
        cout<<"Insect constructor"<<endl;
    }
    int age;
    void fly()
    {
        cout<<"Insect Fly"<<endl;
    }
};
class Larva:virtual public Insect
{
    public:
Larva()

    {
        cout<<"Larva constructor"<<endl;
    }
};
class Caterpillar: virtual public Insect
{
     public:
    Caterpillar()
    {
        cout<<"Caterpillar constructor"<<endl;
    }

};
class Butterfly:public Larva,public Caterpillar
{
     public:
Butterfly()
    {
        cout<<"Butterfly constructor"<<endl;
    }
};
main()
{
    Butterfly o;
    o.fly();
}
