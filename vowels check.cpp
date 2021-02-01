#include<iostream>
using namespace std;

class check
{
	char ch;
	
	public:
		void input()
		{
			cout<<"enter the character ch:";
			cin>>ch;
		}
		void output()
		{
		 if (ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch== 'u' || ch=='U')
			{
				cout<<"char is vowel";
			}
		else
		{
			cout<<"char is consonant";
		}
		}
};
main()
{
	check c;
	c.input();
	c.output();
}
