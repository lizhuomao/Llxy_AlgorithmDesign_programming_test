#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num;
    int sum=0,i=0,j=0,k=0;
    char *a[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    while((num=getchar())!='\n')
        sum+=num-48;
    i=sum/100;
    j=(sum/10)%10;
    k=sum%10;
    if(i==0&&j==0)
    {
        printf("%s",a[k]);
    }
    else if(i==0)
    {
        printf("%s ",a[j]);
        printf("%s",a[k]);
    }
    else
    {
        printf("%s ",a[i]);
        printf("%s ",a[j]);
        printf("%s",a[k]);
    }
    return 0;
}
