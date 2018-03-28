#include <stdio.h>
int main(void) {
	int z[10],i,n,j,element;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&z[i]);
	}
	for(i=0;i<n;i++)
	{
            for(j=i+1;j<=n;j++)
	{
	if(z[i]>z[j])
	{
	element=z[i];
	z[i]=z[j];
	z[j]=element;
	}
	}
	}
	for(i=n;i>=1;i--)
	{
	printf("%d",z[i]);
	}
return 0;
}
