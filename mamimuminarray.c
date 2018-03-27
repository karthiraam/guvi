#include<stdio.h>
int main()
{
int a[100],b,element=0;
scanf("%d",&b);
printf("\nEnter the %d numbers",b);
for(int i=0;i<b;i++)
{
  scanf("%d",&a[i]);
}

for(int j=0;j<b;j++)
{
  if(a[j]>element)
    {
      element=a[j];
     }
}
printf("%d",element);
  
  return 0;
  }
  
      
