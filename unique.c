#include<stdio.h>

int main()
{
int j,i,k;
scanf("%d",&j);
int z[20];
for(i=0;i<j;i++)
  {
    scanf("%d",&z[i]);
  }
for(i=0;i<j;i++)
{
    for(k=i+1;k<j;k++)
      {
        if(z[i]==z[k])
            printf("%d ",z[i]);}
      }  
return 0;
}
