#include <stdio.h>
#include <math.h>

struct student{
    char ID[15];
    int ComputerNumber;
    int ExamNmber;
};

int main(){
    int count,i,j;
    scanf("%d",&count);
    struct student s[count];
    for(i = 0; i < count; i++){
        scanf("%s %d %d",s[i].ID, &s[i].ComputerNumber, &s[i].ExamNmber);
    }
    
    int QueryNumber;
    scanf("%d",&QueryNumber);
    int arr[QueryNumber];
    for(i = 0; i < QueryNumber; i++){
        scanf("%d",&arr[i]);
    }
    
    
    for(i = 0; i < QueryNumber; i++){
        for(j = 0; j < count; j++){
            if(s[j].ComputerNumber == arr[i]){
                printf("%s %d\n",s[j].ID, s[j].ExamNmber);
            }
        }
        
    }
    
}


