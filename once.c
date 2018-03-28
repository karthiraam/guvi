#include<stdio.h>

int main()
{
	int z[100],f[100],n;
	printf("Enter n");
	scanf("%d",&n);
	printf("Enter array:");
	for(int i=0;i<n;i++)
  {
		scanf("%d",&z[i]);
		f[i]=0;
	}
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	{
		if(z[i]==z[j]){
			f[i]++;
		}
	}
	for(i=0;i<n;i++){
		if(f[i]==1){
			printf(" %d",z[i]);
		}
    return 0;
	}
