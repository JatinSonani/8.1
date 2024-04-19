//Q.3 Write a+ Program to perform the addition operation of two 1D arrays & store it in another array. Keep in mind that both array sizes must be the same.

#include<stdio.h>
main()
{
	int n,i;
	printf("Enter size of Array = ");
	scanf("%d",&n);
	int a[n], b[n],sum[n];
	printf("Enter A array Value =\n");
	
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("Enter B array Value =\n");
	
	for(i=0;i<n;i++)
	{
		printf("b[%d] = ",i);
		scanf("%d",&b[i]);
	}
	
	printf("Sum of A & B array =");
	
	for(i=0;i<n;i++)
	{
		sum[i] = a[i] + b[i];
		printf("%d ",sum[i]);
	}
	
}
