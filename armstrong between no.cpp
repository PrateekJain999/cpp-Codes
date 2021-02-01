#include<iostream>
using namespace std;

main()
{
	int n1, n2, i, temp, num, rem;
	
	cout<<"enter the value of number upto which you want to check armstrong no:";
	cin>>n1>>n2;
	
	for(i=n1+1; i<n2; ++i)
  {
      temp=i;
      num=0;
      while(temp!=0)
      {
          rem=(temp%10);
          num+=rem*rem*rem;
          temp/=10;
      }
      if(i==num)
      {
          cout<<"  "<<i<<"  ";
      }	
   }
   cout<<" are Armstrong number.";
}
