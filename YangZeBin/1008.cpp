#include <stdio.h>

int main(){
    int number,pianyi,i,j,n,temp;
    scanf("%d %d",&number,&pianyi);
    int arr[number];
    for(i = 0; i < number; i++){
        scanf("%d",&arr[i]);
    }
    //将最后一个元素保存
    //将所有元素后移
    //将第一个元素赋与保存下来的数字
    for(n = 0; n< pianyi; n++){
        temp = arr[number-1];
        for(j = number-2; j >= 0; j--){
            arr[j+1] = arr[j];
        }
        arr[0] = temp;
    }
    for(i = 0; i < number; i++){
        printf("%d",arr[i]);
        if(i != number-1){
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}

