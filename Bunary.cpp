#include<iostream>
using namespace std;
class CC
{
    int count;
public:
    CC():count(100)
    {

    }
    CC(int t)
    {
        count=t;
    }
    int display()
    {
        return count;
    }
    friend CC operator -(CC &X);
};
CC operator -(CC &X)
{
    X.count=-X.count;
    return X;
}
main()
{
    CC O1,O2;
    cout<<"\n Initial O1 value:"<<O1.display();
    cout<<"\n Initial O2 value:"<<O2.display();
    -O2;
    cout<<"\n Operator overloaded O1 Value:"<<O1.display();
    cout<<"\n Operator overloaded O2 Value:"<<O2.display();

}
