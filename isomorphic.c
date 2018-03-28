#include <stdio.h>
#include<string.h>
void main(void) {
	char a[100],b[100];
	scanf("%s %s",in1,in2);
	int m,n,u,v,w,x,y,z,won=0;
	m=strlen(a);
	n=strlen(b);
	if(m==n)
	{
	for(int i=0;i<m;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			u=a[i];
			v=a[j];
			w=b[i];
			x=b[j];
			y=u-v;
			z=w-x;
			if(y==z)
			{
				won=1;
			}
			else
			{
				won=0;
				break;
			}
		}
	}
	}
	else
	{
		printf("no");
	}
	if(won==1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
return 0;
}
