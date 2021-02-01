#include<iostream>
using namespace std;

class employee
{
	protected:
	char ename[100];
	int Enum , salary;
	
	public:
		void getdata()
		{	
			cout<<"enter employer name: ";
			cin>>ename;
			cout<<"enter employer id: ";
			cin>>Enum;
			cout<<"enter employer salary: ";
			cin>>salary;
		}
};
class employer_details:public employee
{
	public:
		void display()
		{
			cout<<endl<<endl<<endl<<endl<<"_:_:_:_:_:_:__:_:_:_:_:_:_: employer details :_:_:_:_:_:_:_:_:_:_:_:_:_"<<endl<<endl;
			
			cout<<"employer name: "<<ename<<"";
			cout<<endl<<"employer id: "<<Enum<<"";
			cout<<endl<<"employer salary: "<<salary<<"";
		}
};
main()
{
	employer_details d;
	d.getdata();
	d.display();
}
