#include<stdio.h>

int main()
{
	int a[10];
	int n,i,t;
	printf("no.of elements to enter");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n/2;i++)
	{
		t=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=a[i];
    } 
    for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}