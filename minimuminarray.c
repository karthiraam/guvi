#include<stdio.h>
int main()
{
int a[100],b,element;
scanf("%d",&b);
printf("\nEnter the %d numbers",b);
for(int i=0;i<b;i++)
{
  scanf("%d",&a[i]);
}
element=a[0];

for(int j=0;j<b;j++)
{
  if(a[j]<element)
    {
      element=a[j];
     }
}
printf("%d",element);
  
  return 0;
}
