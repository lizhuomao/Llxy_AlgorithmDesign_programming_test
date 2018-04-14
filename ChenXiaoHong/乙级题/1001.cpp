#include<stdio.h>
void main()
{
    int  a,b,c,d,e;
    scanf("%d",&a);
    b=1;
    d=1;
    while(b<=1000)
    {
        {


        if(a>1 && a%2==0)
             a=a/2;
             printf("%d  ",a);
        if(a>1 && a%2==1)
            {
                a=(3*a+1)/2;
            printf("%d  ",a);
            }
               d++;
    }
            if(a==1)
            break;

            b++;

    }
    printf("%d\n",d);
}
