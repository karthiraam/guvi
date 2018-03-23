#include <stdio.h>
 
int main(void) {
	int a;
	scanf("%d",&a);
	if(sizeof(a)==4)
	{
		printf("Invalid input");
	}
	else if((a%2)==0)
	{
		printf("The number is even");
	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}
