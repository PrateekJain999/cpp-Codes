#include<iostream>
using namespace std;

class program
{
	private:
		int a,b;
		
	public:
		void input()
		{
			cout<<"enter the value of a & b :";
			cin>>a>>b;
		}
		
		void output()
		{
			cout<<"value of a: "<<a<<""<<endl;
			cout<<"value of b: "<<b<<"";
		}
};

int main()
{
	program p;
	
	p.input();
	p.output();
	
	return 0;
}
