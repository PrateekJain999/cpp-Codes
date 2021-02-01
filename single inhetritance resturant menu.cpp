#include<iostream>
using namespace std;

class resturant
{
	int amount[100],i,n;
	string name[100];
	
	public: 
	    void item()
	    {
	        cout<<"enter the no of food item: ";
	        cin>>n;
	        cout<<endl<<"enter the name and amount of the food:"<<endl<<endl;
	        
			for(i=1;i<=n;i++)
	        {
		        cout<<""<<i<<".  :   ";
		        cin>>name[i];
		        cout<<"\trs. ";
		        cin>>amount[i];
			}
		}
		void menu()
		{
			cout<<endl<<endl<<"_:_:_:_:_:_:__:_:_:_:_:_:_: cooks and books :_:_:_:_:_:_:_:_:_:_:_:_:_"<<endl<<endl;
			
			cout<<"    food name \t    rate"<<endl<<endl;
			for(i=1;i<=n;i++)
	        {
		        cout<<""<<i<<":     "<<name[i]<<" \t    "<<amount[i]<<""<<endl;
			}
		}
};
class resturant_menu:public resturant
{
	int bill;
	
	public:
		void order()
		{
			cout<<endl<<endl<<"thank you for visiting:"<<endl<<endl<<"************: come soon :************";
		}
		
};
main()
{
	resturant_menu r;
	r.item();
	r.menu();
	r.order();
}
