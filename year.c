#include <stdio.h>

int main(void) {
	int y;
	scanf("%d",&y);
	if((year%4)==0)
	{
		printf("It is a leap year");
	}
	else
	{
		printf("It is not a leap year");
	}
	return 0;
}
