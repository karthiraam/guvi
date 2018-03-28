#include<stdio.h>
{
int hours,min,sec;
scanf("%d",&hours);
min=hours/60;
sec=hours*60*60;
printf("%d %d",min,sec);
return 0;
}
