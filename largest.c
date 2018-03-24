#include<stdio.h>
int main()
{
	int a,b,c,element;
	printf("Enter the values of a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		element=a;
	}
	else if((b>a)&&(b>c))
	{
		element=b;
	}
	else
	{
		element=c;
	}
	printf("%d",element);
	return 0;
}
