//查验身份证
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char b[12]={'1','0','X','9','8','7','6','5','4','3','2'};
    int j;
    scanf("%d",&j);
    int i,k,z,m=0;
    char num[j][19];
    for(i=0;i<j;i++)
        scanf("%s",&num[i]);
    for(i=0;i<j;i++)
    {
        z=0;
        for(k=0;k<17;k++)
            z=z+(num[i][k]-48)*a[k];
        z=z%11;
        if(b[z]!=num[i][17])
                printf("%s\n",num[i]);
        else
            m++;
    }
    if(m==j)
        printf("All passed");
    return 0;
}
