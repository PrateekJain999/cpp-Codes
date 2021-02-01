#include<iostream>
using namespace std;

class add
{
	float apple,orange,grapes,banana;
	
	public:
		
		void fruit()
		{
			cout<<"apple=50 rs/kg"<<endl<<"orange= 35 rs/kg"<<endl<<"grapes=100 rs/kg"<<endl<<"banana=20 rs/kg"<<endl<<endl<<"enter fruits weight"<<endl<<endl;
			
			cout<<"enter apple weight:- "<<endl;
			cin>>apple;
			
			cout<<"enter orange weight:- "<<endl;
			cin>>orange;
			
			cout<<"enter grapes weight:- "<<endl;
			cin>>grapes;
			
			cout<<"enter banana weight:- "<<endl;
			cin>>banana;
		}
		void display()
		{
			cout<<"entered weight of apple: "<<apple<<""<<endl;
			cout<<"entered weight of orange: "<<orange<<""<<endl;
			cout<<"entered weight of grapes: "<<grapes<<""<<endl;
			cout<<"entered weight of banana: "<<banana<<""<<endl;
		}
		add sum(add x)
		{
			add d;
			cout<<"total weight of fruits: "<<endl;
			
			d.apple=apple + x.apple;
			d.orange=orange + x.orange;
			d.grapes=grapes + x.grapes;
			d.banana=banana + x.banana;
			return d;
		}
	
};
main()
{
	add a1,a2;
	a1.fruit();
	a2.fruit();
	cout<<endl<<"fruit taken by 1st family: "<<endl<<endl;
	a1.display();
	
	cout<<endl<<"fruit taken by 2nd family: "<<endl<<endl;
	a2.display();
	
	add a3=a1.sum(a2);
	cout<<"\n total fruits taken by 1st and 2nd family:"<<endl;
	a3.display();
	
}
