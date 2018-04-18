#include <stdio.h>
#define N 15

int main()
{
    int a,b,Da,Db,Pa=0,Pb=0,sum;
    scanf("%d%d%d%d",&a,&Da,&b,&Db);
    while(a!=0)
    {
        if(a%10==Da)
            Pa=Pa*10+Da;
        a=a/10;
    }
    while(b!=0)
    {
        if(b%10==Db)
            Pb=Pb*10+Db;
        b=b/10;
    }
    sum=Pa+Pb;
    printf("%d",sum);
    return 0;
}
