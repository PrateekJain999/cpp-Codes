#include<iostream>
using namespace std;

class armstrong
{
	int remainder,result=0,original_number,number;
	
	public:
		void input()
		{
			cout<<"enter the value of number=";
			cin>>number;
		}
		void output()
		{
			original_number = number;
			
			while (original_number != 0)
            {
                remainder = original_number%10;
                result += remainder*remainder*remainder;
                original_number /= 10;
            }

            if(result == number)
            {
			    cout<<""<<number<<" is an Armstrong number.";
			} 
            else
            {
        	    cout<<""<<number<<" is not an Armstrong number.";
		    }
		}
};

main()
{
	armstrong a;
	a.input();
	a.output();
}
