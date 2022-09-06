#include<stdio.h>
int main()
{
	int i,r,n,tv;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("enter the tabular value: ");
	scanf("%d",&tv);
	for(i=1;i<=n;i++)
	{
		r=i*tv;
		printf("\n %d*%d=%d",i,tv,r);
	}
	return 0;
}