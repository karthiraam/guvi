
#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int z[n];
	for(int i=0;i<n;i++)
	scanf("%d",&z[i]);
	for(int i=0;i<n;i++)
	{
		if(z[i]==i)
		printf("%d",z[i]);
	}

	return 0;
}
