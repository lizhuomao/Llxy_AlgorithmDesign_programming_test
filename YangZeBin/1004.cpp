#include <stdio.h>
#include <string.h>
struct student{
    char name[11];
    char sno[11];
    int score;
};

int main(){
    
    int number,i,Max_score=0,Min_score = 0,j;
    char name[10],sno[10];
    char Max_name[10],Max_sno[10];
    
    scanf("%d",&number);
    struct student a[number];
    for(i = 0; i < number; i++){
        scanf("%s %s %d",a[i].name,a[i].sno,&a[i].score);
        if(a[i].score > Max_score){
            Max_score = a[i].score;
        }
        if(i == 0){
            Min_score = a[0].score;
        }
        if(a[i].score < Min_score){
            Min_score = a[i].score;
        }
        // if(a[i].score > 100 || a[i].score> 0) return 0;
    }
    
    for(j = 0; j < number; j++){
        if(a[j].score == Max_score){
            printf("%s %s\n",a[j].name,a[j].sno);
        }
       
    }
    for(j = 0; j < number; j++){
        if(a[j].score == Min_score){
            printf("%s %s\n",a[j].name,a[j].sno);
        }
       
    }
    
    return 0;
    // printf("Max_score is %d\n",Max_score);
    // printf("Min_score is %d\n",Min_score);
}

