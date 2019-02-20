#include <stdio.h>
#include <math.h>

int main(){
    float number;
    char c;
    scanf("%f",&number);
    scanf("%s",&c);
    float half = floor(number/2+0.5);
    int i,j;
    for(i = 0; i < number; i++){
        printf("%c",c);
    }
    printf("\n");
    
    int loopnumber = half-2;
    for(i = 0; i < loopnumber; i++){
        for(j = 0; j < number; j++){
            if(j == 0 || j == number-1){
                printf("%c",c);
            }else{
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
    for(i = 0; i < number; i++){
        printf("%c",c);
    }
    printf("\n");
}


