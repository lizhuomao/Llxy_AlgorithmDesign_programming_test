#include <stdio.h>

int main(int argc, char **argv) {
    int a,count=0,b[1000]={0},i = 0;
    while((a = getchar()) != 10){
        if(a >= '0' && a <= '9' ){
            count += (a - 48);
        }
    };
    
    while(count != 0){
        b[i++] = count % 10;
        count /= 10;
    }
    int j;
    for(j = i-1; j >= 0;j--){
        // printf("%d",b[j]);
        switch(b[j]){
            case 1:
                printf("%s","yi");
                break;
            case 2:
                printf("%s","er");
                break;
            case 3:
                printf("%s","san");
                break;
            
            case 4:
                printf("%s","si");
                break;
                
                case 5:
                printf("%s","wu");
                break;
                
                case 6:
                printf("%s","liu");
                break;
                
                case 7:
                printf("%s","qi");
                break;
                
                case 8:
                printf("%s","ba");
                break;
                
                case 9:
                printf("%s","jiu");
                break;
                
                case 0:
                printf("%s","ling");
                break;
        }
        if(j != 0) printf(" ");
    }
    
}

