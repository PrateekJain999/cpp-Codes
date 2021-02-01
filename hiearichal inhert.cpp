#include<iostream>
using namespace std;

class bmovie
{
	public:
		void input()
		{
			string movie_name;
			
			cout<<"enter the bollywood movie name: ";
			cin>>movie_name;
		}
};
class hmovie:public bmovie
{
	public:
		void input1()
		{
			string movie_name;
			
			cout<<"enter the hollywood movie name: ";
			cin>>movie_name;
		}
};
class tmovie:public bmovie
{
	public:
		void input2()
		{
			string movie_name;
			
			cout<<"enter the tollywood movie name: ";
			cin>>movie_name;
		}
};
main()
{
	tmovie t;
	hmovie h;
	t.input();
	t.input2();
	h.input();
	h.input1();
	//h.input2()                it has no access using other obje of another class
}

