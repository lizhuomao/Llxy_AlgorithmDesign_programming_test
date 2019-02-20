#include <stdio.h>

int main(){
    int number,i,j,a;
    scanf("%d",&number);
    int arr[number];
    for(i = 0; i < number; i++){
        scanf("%d",&arr[i]);
    }
    
    int result = 0;
    for(i = 0; i < number; i++){
        for(j = 0; j < number-1;j++){
            
            if(i <= j){
                result += arr[i] * 10 + arr[j+1];
            }else{
                result += arr[i] * 10 + arr[j];
            }
            
            
        }
    }


    printf("%d",result);
    
    
}


