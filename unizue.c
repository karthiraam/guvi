#include <stdio.h>
int main()
{
    int z[200],a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    scanf("%d",&z[i]);
    for(int i=0;i<a;i++)
    {
        for(int j=i+1;j<a;j++)
        {
            if(z[i]==z[j])
            {
                printf("%d",z[i]);
                goto escape;
            }
        }
    }
    escape:
    return 0;
}
