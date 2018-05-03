#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    int b[10]={0};
    int i;
    scanf("%s",&a);
    for(i=0;i<strlen(a);i++)
    {
        b[a[i]-48]++;
    }
    for(i=0;i<10;i++)
        if(b[i]!=0)
        printf("%d:%d\n",i,b[i]);
    return 0;
}
