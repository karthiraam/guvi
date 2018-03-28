#include <stdio.h>
int main(void) {
	int a[10],i,n,j,temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
            for(j=i+1;j<=n;j++)
	{
	if(a[i]>a[j])
	{
	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
	}
	}
	}
	for(i=n;i>=1;i--)
	{
	printf("%d",a[i]);
	}
return 0;
}
