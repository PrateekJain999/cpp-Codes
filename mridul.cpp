#include<iostream>
using namespace std;
class employee
{
	private:
	string emp_name;
	long emp_num;
	public:
	void get_data()
	{
		cout<<"Enter the name : ";
		cin>>emp_name;
		cout<<"Enter the employee number : ";
		cin>>emp_num;
	}
	void put_data()
	{
		cout<<"The name : \t The Employee number : ";
		cout<<emp_name<<"\t"<<emp_num<<endl;
	}
};
main()
{
	employee obj[100];
	int i;
	char a;
	obj[i].get_data();
	cout<<"for more? (y) unless? (n)";
	cin>>a;
	for(i=1;i<=100;i++)
	{
		
		switch(a)
		{
			case 'y': obj[i].get_data();
			         break;
			case 'n':main();
			         break;
		}
		
    }
    for(i=1;i<100;i++)
    {
    	obj[i].put_data();
	}
}
