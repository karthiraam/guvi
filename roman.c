#include<stdio.h>
#include<string.h>

int main(void)
{	
	int t=0,n,m;
	char roman[9];
	scanf("%s",roman);
	m=strlen(roman);
	for(int j=0;j<m;j++)
	{
	switch (roman[j])
      {
     case 'I':  
            roman[j] = 1;
            break;
     case 'V': 
            roman[j] = 5;
            break;
     case 'X': 
            roman[j] = 10;
            break;
     case 'L': 
            roman[j] = 50;
            break;
     case 'C':  
            roman[j] = 100;
            break;
     case 'D': 
            roman[j] =  500;
            break;
	 }
}
for(j=0;j<m;j=j+2)
{
		if(roman[j]<roman[j+1])
		{
			n=roman[j+1]-roman[j];
		}
		else
		{
			n=roman[j+1]+roman[j];
		}
		t=n+t;
}
printf("%d",t);
return 0;
}
