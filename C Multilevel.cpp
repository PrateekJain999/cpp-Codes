#include<iostream>
using namespace std;
class Boss
{
public:
    void acess()
    {
        cout<<"BOSS=Bossing around"<<endl;
    }
};
class Manager:public Boss
{
public:
    void manage()
    {
        cout<<"MANAGER=Hi am the leader of a team"<<endl;
    }
};
class Team:public Manager
{
    public:
        void play()
        {
            cout<<"TEAM=Backbone"<<endl;
        }
};
main()
{
    Team o;
    o.acess();
    o.manage();
    o.play();
    Boss b;
    b.play();
}
