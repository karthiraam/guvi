#include<stdio.h>
int main()
{
int sum=0,remainder=0,n;
scanf("%d",&n);
int temp=n;
while(n!=0)
{
remainder=n%10;
sum=sum*10+remainder;
n=n/10;
}
if(sum==temp)
{
  printf("It is a palindrome");
 }
else
{
  printf("It is not a palindrome");
} 
return 0;
}
 
