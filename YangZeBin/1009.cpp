#include <stdio.h>

int main(){
    
    void printstrToSpace(char str[], int index,int length);
    
    char str[80];
    int i = 0,length;
    while((str[i++] = getchar()) != 10);
    //�õ��ַ������ȣ�����iָ����Ϊ�����һ���ַ���λ��
    length = --i;
    while(1){
        //���ַ���β����ʼ��ǰѰ�ҿո�λ�ã��������ڿո�λ����
        while(i > 0 && str[i] != ' ') i--;
        if(i == 0){
            //���ַ����Ŀ�ͷ��ֱ�Ӵ�ӡ���˳�
            printstrToSpace(str,i,length);
            printf("\n");
            return 0;
        }else if(i > 0){
            //û�е���ͷλ�ã���ӡ�ַ����Ϳո�
            //�����Ѿ�i--����Ҫ��һ���ո��ĵ�һ���ַ�λ��
            printstrToSpace(str,i+1,length);
            printf(" ");
        }
        //��λ���ո�֮ǰ
        i--;
    }
    
    return 0;
}

//��ӡ��index��ʼ����һ���ո�֮����ַ���
void printstrToSpace(char str[], int index,int length){
    while(str[index] != ' ' && index <= length-1 && index >= 0){
        printf("%c",str[index]);
        index++;
    }
}

