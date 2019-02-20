#include <stdio.h>

int main(){
    int number,i;
    scanf("%d",&number);
    int jia[number][2],yi[number][2];
    for(i = 0; i < number; i++){
        scanf("%d%d%d%d",&jia[i][0],&jia[i][1],&yi[i][0],&yi[i][1]);
    }
    
    int result,jiac = 0, yic = 0;
    for(i = 0; i < number; i++){
        result = jia[i][0] + yi[i][0];
        if(result == jia[i][1] && result != yi[i][1]){
            jiac++;
        }else if(result != jia[i][1] && result == yi[i][1]){
            yic++;
        }
    }
    
    printf("%d %d",yic,jiac);
    
    
}


