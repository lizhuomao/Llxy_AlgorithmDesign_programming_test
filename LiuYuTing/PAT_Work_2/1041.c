#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j;
    scanf("%d",&m);
    long int a[m];
    int b[m],c[m];
    for(i=0;i<m;i++)
        scanf("%ld%d%d",&a[i],&b[i],&c[i]);
    scanf("%d",&n);
    int d[n];
    for(i=0;i<n;i++)
        scanf("%d",&d[i]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(d[i]==b[j])
                printf("%ld %d\n",a[j],c[j]);
        }
    }
    return 0;
}
