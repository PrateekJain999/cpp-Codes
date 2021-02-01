#include<iostream>
using namespace std;

class details
{
	int id,salary,ph_no,experience,working_year;
	string name,address;
	
	public:
		
	int employee(string aname, int aid)
	{
		name=aname;
		id=aid;
		cout<<"_:_:_:_:_:_:__:_:_:_:_:_:_: employee details :_:_:_:_:_:_:_:_:_:_:_:_:_";
		
		cout<<endl<<endl<<".:.:.:.:.:.: identity card :.:.:.:.:.:."<<endl<<endl<<"name: "<<name<<"";
		cout<<endl<<"id: "<<id<<"";
		return 0;
	}
	void employee(int asalary,string aaddress, int aph_no)
	{
		
		salary=asalary;
		address=aaddress;
		ph_no=aph_no;
		
		cout<<endl<<endl<<".:.:.:.:.:.: company details :.:.:.:.:.:."<<endl<<endl<<"salary: "<<salary<<"";
		cout<<endl<<"address: "<<address<<"";
		cout<<endl<<"phone no: "<<ph_no<<"";
	}
	void employee(int aexperience,int aworking_year)
	{
		
		experience=aexperience;
		working_year=aworking_year;
		
		cout<<endl<<endl<<".:.:.:.:.:.: boss details :.:.:.:.:.:."<<endl<<endl<<"experience: "<<experience<<"";
		cout<<endl<<"working_year: "<<working_year<<"";
	}
};
main()
{
	details z;
	z.employee("prateek",1);
	z.employee(100000,"nai_basti_fzd",99974);
	z.employee(10,5);
}
