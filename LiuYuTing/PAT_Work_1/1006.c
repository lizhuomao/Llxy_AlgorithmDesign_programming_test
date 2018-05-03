#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,a,b,c,i;
    scanf("%d",&num);
    a=num/100;
    b=(num%100)/10;
    c=num%10;
    for(i=1;i<=a;i++)
        printf("B");
    for(i=1;i<=b;i++)
        printf("S");
    for(i=1;i<=c;i++)
        printf("%d",i);
    return 0;
}
