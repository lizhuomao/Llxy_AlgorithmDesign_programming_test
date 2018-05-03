#include<stdio.h>  
#include<string.h>  //lh 
 
void print(int n){  
    char *name[] ={"ling","yi","er","san","si","u","liu","qi","ba","jiu","shi"};  
    int a[10];  
    int i=0;  
    for(i=0;n>=10;i++){  
        a[i]=n%10;  
        n=n/10;  
    }  
     a[i++]=n;  
  
 while(i--){  
    if(i!=0){  
      printf("%s ",name[a[i]]);  
    }else{  
    printf("%s\n",name[a[i]]);  
    }  
  }  
  
      
}  
int main(){  
    char s[100];  
    char *n=s;  
    scanf("%s",s);  
    int sum=0;  
    while(*n!='\0'){  
        sum=sum+(*n-'0');  
        n++;  
    }  
    print(sum);  
    return 0;
}  
