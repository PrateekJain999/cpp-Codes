#include<iostream>
#include<cstring>
using namespace std;

main()
{
	char A[100],B[100],C[100];
	
	cout<<"enter the string A and B"<<endl;
			
			gets(A);
			gets(B);
               
		strcpy(A,B);   

	cout<<"the copied string is "<<strcpy(A,B)<<"";

}
