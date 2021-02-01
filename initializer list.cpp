#include<iostream>
#include<conio.h>
using namespace std;
class account
{
	private:
		int accno;
		double balance;
public:
	account();
	account(int,double);
	void showbalance();
};
account::account(int a,double b):accno(a),balance(b)
{
}
void account::showbalance()
{
	cout<<"account no:"<<accno<<endl;
	cout<<"balance:"<<balance<<endl;
}
int main()
{
	account a1(2,400);
	a1.showbalance();
	getch();
	return 0;
}

