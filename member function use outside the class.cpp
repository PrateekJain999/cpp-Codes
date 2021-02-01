#include<iostream>
using namespace std;

class student
{
	float apple,orange,grapes,banana;
	float sugar,salt,oil,ghee,rs;
	
	public:
		void fruits();
		void kit();		
};
void student::fruits()
{
	cout<<"enter the weight of fruits in kg"<<endl;
	cout<<"apple = 50 rs/kg"<<endl<<"orange = 20 rs/kg"<<endl<<"grapes = 75 rs/kg"<<endl<<"banana = 25 rs/kg"<<endl<<endl;
	
	cout<<"apple: ";
	cin>>apple;
	cout<<"orange: ";
	cin>>orange;
	cout<<"grapes: ";
	cin>>grapes;
	cout<<"banana: ";
	cin>>banana;
}
void student::kit()
{
	cout<<"enter the weight of product in kg"<<endl;
	cout<<endl<<"sugar = 35 rs/kg"<<endl<<"salt = 13 rs/kg"<<endl<<"oil = 120 rs/kg"<<endl<<"ghee = 435 rs/kg"<<endl<<endl;
	
	cout<<"sugar: ";
	cin>>sugar;
	cout<<"salt: ";
	cin>>salt;
	cout<<"oil: ";
	cin>>oil;
	cout<<"ghee: ";
	cin>>ghee;
	
	rs = apple*50 + orange*20 + grapes*75 + banana*25 + sugar*35 + salt*13 + oil*120 + ghee*435;
	cout<<endl<<"total amout of purchasing: "<<rs<<"";
}
main()
{
	student s;
	s.fruits();
	s.kit();
}
