#include <stdio.h>

int main(){
    
    void printstrToSpace(char str[], int index,int length);
    
    char str[80];
    int i = 0,length;
    while((str[i++] = getchar()) != 10);
    //得到字符串长度，并将i指针以为到最后一个字符的位置
    length = --i;
    while(1){
        //从字符串尾部开始往前寻找空格位置，最后会落在空格位置上
        while(i > 0 && str[i] != ' ') i--;
        if(i == 0){
            //到字符串的开头了直接打印后退出
            printstrToSpace(str,i,length);
            printf("\n");
            return 0;
        }else if(i > 0){
            //没有到开头位置，打印字符串和空格
            //由于已经i--，需要加一到空格后的第一个字符位置
            printstrToSpace(str,i+1,length);
            printf(" ");
        }
        //移位到空格之前
        i--;
    }
    
    return 0;
}

//打印从index开始到下一个空格之间的字符串
void printstrToSpace(char str[], int index,int length){
    while(str[index] != ' ' && index <= length-1 && index >= 0){
        printf("%c",str[index]);
        index++;
    }
}

