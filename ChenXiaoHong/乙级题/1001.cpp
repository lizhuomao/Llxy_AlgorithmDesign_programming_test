#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    c=0;
    d=0;
    while(c<1000)
        {

         if(a==1)
            break;
              d=d+1;
            if(a%2==0)
            {
                a=a/2;
                continue;

            }
            if(a%2==1)
            {
                a=(3*a+1)/2;
                continue;
            }
                 c++;
        }
        printf("%d",d);
    return 0;
}
