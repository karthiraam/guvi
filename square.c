#include<stdio.h>
int main()
{
  int p,q,r;
  printf("Enter the number p and q");
  scanf("%d %d", &p,&q);
  r=pow(p,q);
  printf("%d",r);
  return 0;
}
