#include <stdio.h>

int main(){
    int number,pianyi,i,j,n,temp;
    scanf("%d %d",&number,&pianyi);
    int arr[number];
    for(i = 0; i < number; i++){
        scanf("%d",&arr[i]);
    }
    //�����һ��Ԫ�ر���
    //������Ԫ�غ���
    //����һ��Ԫ�ظ��뱣������������
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

