#include<stdio.h>
int main()
{
	int n,i;
	unsigned long long fact=1;
	printf("enter an integer: ");
	scanf("%d",&n);
	if(n<0)
	{
		printf("error!factorial of a negative number doesnut exist.");
	}
	else
	{
		for(i=1; i<=n; ++i)
		{
			fact *=i;
		}
		printf("Factorial of %d= %llu",n,fact);
	}
	return 0;
}