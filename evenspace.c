#include<stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
a=a+1;
while(a<b)
{
			
	if((a%2)==0)
	{
		printf("%d \n",a);
	}
	
	
	a=a+1;
}
return 0;
}
