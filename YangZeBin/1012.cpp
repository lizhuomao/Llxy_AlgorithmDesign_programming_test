#include <stdio.h>

int main(){
    int result[5] = {0,0,0,0,0};
    
    int count,i;
    double result3 = 0.0;
    scanf("%d",&count);
    int number[count+1];
    for(i = 0; i < count; i++){
        scanf("%d",&number[i]);
        
    }
    int odd = 2, a3count = 0, a4count = 0;
    for(i = 0; i < count; i++){
        if((number[i] % 5 == 0) && (number[i] % 2 == 0)){
            result[0] += number[i];
        }else if((number[i] % 5 == 1)){
            if(odd % 2 == 0){
                result[1] += number[i];
                
            }else{
                result[1] -= number[i];
            }
            odd++;
        }else if((number[i] % 5 == 2)){
            a3count++;
            result[2] = a3count;
        }else if((number[i] % 5 == 3)){
            
            result[3] += number[i];
            a4count++;
        }else if((number[i] % 5 == 4)){
            if(number[i] > result[4]){
                result[4] = number[i];
            }
        }
        
    }
    if(result[3] != 0) result3 = (double) result[3] / a4count;
    
    for(i = 0; i < 5; i++){
        if(i == 1 && odd != 2){
            printf("%d",result[i]);
        }else if(result[i] == 0){
            printf("%s","N");
        }else if(i == 3){
            printf("%.1f",result3);
        }else{
            printf("%d",result[i]);
            
        }
        if(i < 4){
            printf("%s", " ");
        }
    }
    printf("\n");
    return 0;
}

