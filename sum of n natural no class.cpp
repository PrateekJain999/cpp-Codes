#include<iostream>
using namespace std;

class sum
{
	int n,sum;
	
	public:
		void input()
		{
			cout<<"enter the value of last number upto which you want to add: "<<endl;
			cin>>n;
		}
		void output()
		{
			sum= (n*(n+1))/2;
			cout<<"the sum of n natural no is: "<<sum<<"";
		}
};
main()
{
	sum s;
	s.input();
	s.output();
}
