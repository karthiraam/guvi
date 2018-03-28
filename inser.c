#include <stdio.h>
#include<math.h>
void main()
{
    char a[100],b[100],i,cost=0,cost1=0;
    scanf("%[^\n]s",a);
    scanf("\n%[^\n]s",b);
    int hash1[26]={0};
    int hash2[26]={0};
    int l1=strlen(a);
    int l2=strlen(b);
    int count=0,min;
    for(i=0;a[i];i++){
        hash1[a[i]-97]++;
    }
    for(i=0;b[i];i++){
        hash2[b[i]-97]++;
    }
    for(i=0;i<26;i++){
        count+=abs(hash1[i]-hash2[i]);
    }
    if(l1!=l2){
        if(count==abs(l1-l2)){
            cost=+count*3;
        }
    }
    else{
        cost=((count/2)*3)+((count/2)*4);
        cost1+=(count/2*5);
    }
    min=(cost<cost1)?cost:cost1;
    printf("%d",min);
return 0;
}
