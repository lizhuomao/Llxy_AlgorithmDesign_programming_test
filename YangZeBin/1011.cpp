#include <stdio.h>

struct numberof3{
    long a;
    long b;
    long c;
};

int main(){
    int number;
    scanf("%d", &number);
    int i;
    struct numberof3 n[number];
    for(i = 0; i < number; i++){
        scanf("%ld %ld %ld",&n[i].a, &n[i].b, &n[i].c);
    }
    for(i = 0; i < number; i++){
        if((n[i].a + n[i].b) > n[i].c){
            printf("Case #%d: true\n",i+1);
        }else{
            printf("Case #%d: false\n",i+1);
        }
    }
    return 0;
}

