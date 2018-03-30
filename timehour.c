#include<stdio.h>
int main()
{
int m1,h1,m2,h2 m,h;
printf("Enter the starting time");
scanf("%d",&h1);
scanf("%d",&m1);
printf("Enter the current time");
scanf("%d",&h2);
scanf("%d",&m2);
m=m2-m1;
h=h2-h1;
printf("The diff b/w time periods is....%d:%d",h,m);
return 0;
}
