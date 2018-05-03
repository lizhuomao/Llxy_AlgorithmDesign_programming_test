#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,jj=0,yj=0;
    scanf("%d",&m);
    int jh[m],jq[m],yh[m],yq[m];
    for(i=0;i<m;i++)
        scanf("%d%d%d%d",&jh[i],&jq[i],&yh[i],&yq[i]);
    for(i=0;i<m;i++)
    {
        n=jh[i]+yh[i];
        if(n==jq[i] && n!=yq[i])
            yj++;
        else if(n!=jq[i] && n==yq[i])
            jj++;
    }
    printf("%d %d",jj,yj);
    return 0;
}
