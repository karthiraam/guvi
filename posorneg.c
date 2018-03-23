#include <stdio.h>
 
int main(void) {
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("\nThe number is positive");
	}
	else if(a==0)
	{
		printf("\nThe number is zero");
	}
	else
	{
		printf("\nThe number is negative");
	}
	return 0;
}
 
