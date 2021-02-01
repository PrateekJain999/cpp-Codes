#include<iostream>
using namespace std;

class reverse
{
	int t,r,n;
	
	public:
		void input()
		{
			cout<<"the value of n is: ";
			cin>>n;
		}
		void output()
		{
			t=n;
			while(t !=0)
			{
			    r=((r*10)+(t%10));
			    t=t/10;
		    }
		    
		    cout<<"the reverse of "<<n<<" is: "<<r<<"";
		}
};
main()
{
	reverse r;
	r.input();
	r.output();
}
