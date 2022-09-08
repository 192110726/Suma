#include<stdio.h>
#include<string.h>
int main()
{
	char p1[50],p2[50];
	printf("enter the username: ");
	scanf("%s",p1);
	
	printf("re-enter the user: ");
	scanf("%s",p2);
	if((strcmp(p1,p2)==0))
	{
		printf("username is valid");
	}
	else{
		printf("user name is invalid");
	}
	return 0;
}