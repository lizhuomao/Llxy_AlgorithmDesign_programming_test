#include <stdio.h>

int main(){
    int count, b[3] = {0},weishu = 0,j,i = 0,n = 0;
    scanf("%d",&count);

    while(count != 0){
        b[i++] = count % 10;
        count /= 10;
        weishu++;
    }
    
    if(weishu == 3){
        for(n = 0; n < b[2]; n++){
            printf("%c",'B');
        }
        for(n = 0; n < b[1]; n++){
            printf("%c",'S');
        }
        for(n = 0; n < b[0]; n++){
            printf("%d",n+1);
        }
        printf("\n");
    }
    if(weishu == 2){
        for(n = 0; n < b[1]; n++){
            printf("%c",'S');
        }
        for(n = 0; n < b[0]; n++){
            printf("%d",n+1);
        }
         printf("\n");
    }
    if(weishu == 1){
        for(n = 0; n < b[0]; n++){
            printf("%d",n+1);
        }
         printf("\n");
    }
    return 0;
}

