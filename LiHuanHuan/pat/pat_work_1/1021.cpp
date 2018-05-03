#include <stdio.h>
#include <string.h>//lh
using namespace std;
int main(){
    char str[1001];
    int a[10]={0};
    scanf("%s",str);
    int len=strlen(str);
    for(int i=0;i<len;i++){
        a[str[i]-'0']++;
       //printf("%d ",str[i]-'0');
    }
    for(int i=0;i<10;i++){
        if(a[i]!=0){
            printf("%d:%d\n",i,a[i]);
        }
    }
    return 0;
}

