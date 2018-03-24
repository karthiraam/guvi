#include<stdio.h>
int main()
{
int limit,j;
scanf("%d",&limit);
for(int i=1;i<=limit+1;i++)
{
  if(i>1)
  {
    for(j=2;j<=i+1;j++)
      {
          if((i%j)==0)
          {
            break;
          }
      }    
     if(j==i)
     {
      printf("%d \n",i);
      }
    }
  } 
return 0;
}
