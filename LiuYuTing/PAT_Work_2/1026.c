#include <stdio.h>
#define CLK_TCK 100;

int main()
{
    int c1,c2,time,hh,mm,ss;
    scanf("%d%d",&c1,&c2);
    time=(c2-c1)/CLK_TCK;
    if((c2-c1)%100>=50)
        time+=1;
    hh=time/3600;
    mm=time%3600/60;
    ss=time%3600%60;
    printf("%02d:%02d:%02d",hh,mm,ss);
    return 0;
}
