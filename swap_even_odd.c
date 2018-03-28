#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10],s;
	int m;
	scanf("%[^\n]s",a);
	m=strlen(a);
	if(m%2==0)
	{
	for(int i=0;i<m;i+=2)
             {
             s=a[i];
             a[i]=a[i+1];
             a[i+1]=s;
             }
   	 printf("%s",a);
	}
    else
    {
    for(i=0;i<m;i+=3)
             {
             s=a[i];
             a[i]=a[i+1];
             a[i+1]=s;
             }
   	 printf("%s",a);
	}
	return 0;
}
