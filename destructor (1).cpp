#include<iostream>
#include<conio.h>
using namespace std;
class counter
{
	int id;
	public:
		counter(int i)
		{
			id=i;
			cout<<"constructor of object with id "<<id<<"runs"<<endl;
		}
		~counter()
		{
			cout<<"object with id"<<id<<"is destroyed"<<endl;
		}
	};
	int main()
	{
		counter c1(1);
		counter c2(2);
		counter c3(3);
		cout<<"end of main"<<endl;
		return 0;
		getch();
	}

