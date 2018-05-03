#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j;
    char c,d;
    scanf("%d%c%c",&n,&c,&c);
    if(n%2==0)
        {
            m=n/2;
            for(i=0;i<m;i++)
            {
                if(i==0||i==m-1)
                {
                    for(j=0;j<n;j++)
                        printf("%c",c);
                    printf("\n");
                }
                else
                {
                    printf("%c",c);
                    for(j=0;j<n-2;j++)
                        printf(" ");
                    printf("%c\n",c);
                }
            }
        }
        else
        {
            m=(n+1)/2;
            for(i=0;i<m;i++)
            {
                if(i==0||i==m-1)
                {
                    for(j=0;j<n;j++)
                        printf("%c",c);
                    printf("\n");
                }
                else
                {
                    printf("%c",c);
                    for(j=0;j<n-2;j++)
                        printf(" ");
                    printf("%c\n",c);
                }
            }
        }
    return 0;
}
