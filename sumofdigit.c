#include<stdio.h>
int main()
{
int sum=0,remainder=0,n;
scanf("%d",&n);
while(n!=0)
{
remainder=n%10;
sum=sum+remainder;
n=n/10;
}
printf("%d",sum);
return 0;
}
