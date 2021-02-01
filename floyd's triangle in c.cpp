// this is also called as floyd trinagle..

#include<stdio.h>

main()
{
	int a,i,j,b;
	
	printf("enter the row and column of given figure: ");   // yha humne triangle ki kitni row dalni hai vo daal di thik hai tere que mai 5 hai vo value..
	scanf("%d",&a);
	
	printf("enter the first term of triangle: ");   // or yha pr triangle ka phela element vo daal diya tere que mai vo 1 hai to tu 1 dal diyo..
	scanf("%d",&b);
	
	printf("\n\n\n");                // ye bs humne line chodne ke liye use kiya hai
	
	for(i=1;i<=a;i++)                // yha looping lga di ki row kitni bnani hai..
	{
		for(j=1;j<=i;j++)           // yha looping lgi hai ki har baar ek ek column inc hota jaye..
		{
			printf("%d ",b);       // or yha humne condition apply kr di jisse triangle bn jaye..
			b++;
		}
		printf("\n");
	}
}
