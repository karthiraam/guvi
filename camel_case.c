#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	int l;
	gets(a);
	l=strlen(a);
	for(int j=0;j<l;j++)
	{
	    if(j==0)
	    {
	    a[0]=topper(a[0]);
	    }
	    if(a[j]==' ')
	    {
	    a[j+1]=topper(a[j+1]);
	    }
      return 0;
  }    
