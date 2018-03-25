#include<stdio.h>
int main()
{
int sum=0,remainder=0,n,temp;
scanf("%d",&n);
temp=n;
while(n!=0)
{
remainder=n%10;
sum=sum+(remainder*remainder*remainder);
n=n/10;
}
if(temp==sum)
{
  printf("yes");
  }
else
{
  printf("no");
  }
return 0;
}
