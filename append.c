#include<stdio.h>
#include<string.h>
int main()
{
char z[10000];
scanf("%s",z);
strcat(z,".");
printf("%s",z);
return 0;
}
