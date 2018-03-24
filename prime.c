#include <stdio.h>
int main()
{
    int n, j, karthi = 0;
    scanf("%d",&n);

    for(int i=2; i<=n/2; ++i)
    {
        
        if(n%i==0)
        {
            karthi=1;
            break;
        }
    }

    if (karthi==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}
