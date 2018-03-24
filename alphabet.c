#include <stdio.h>
int main()
{
    char a ;
    printf("Enter character : ");
    scanf("%c",&a);

    if( (a>='a' && a<='z') || (a>='A' && a<='Z'))
        {
        		printf("%c is alphabet.",a);
        }
    else
	{
		printf("%c is not  alphabet.",a);
	}
    return 0;
}
