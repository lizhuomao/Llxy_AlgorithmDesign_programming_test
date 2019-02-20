#include <stdio.h>
#include <math.h>
const int CLK_TCK=100;

int main(){
    double date1, date2,result;
    scanf("%lf",&date1);
    scanf("%lf",&date2);
    result = floor((date2 - date1) / CLK_TCK + 0.5);
    
    int hour = result / 3600;

    printf("%02d:",hour);

    int minute,second;
    minute =  (int)(result / 60) % 60;

    printf("%02d:",minute);
    
    second = (int)(result)% 60;
   	
    printf("%02d\n",second);

    

}


