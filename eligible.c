#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("your eligible to vote");
	}
	else
	{
		printf("you are not eligible to vote");
		printf("\n %d  years left to vote",18-age);
	}
	return 0;
}