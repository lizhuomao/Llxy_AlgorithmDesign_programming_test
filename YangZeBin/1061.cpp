#include <stdio.h>

int main(){
    int i,j;
    int studentnumber,scorenumber;
    scanf("%d%d",&studentnumber,&scorenumber);
    int fullmark[scorenumber],answer[scorenumber];
    int student[studentnumber][scorenumber];
    for(i = 0; i < scorenumber; i++){
        scanf("%d",&fullmark[i]);
    }
    for(i = 0; i < scorenumber; i++){
        scanf("%d",&answer[i]);
    }
    for(i = 0; i < studentnumber; i++){
        for(j = 0; j < scorenumber; j++){
            scanf("%d",&student[i][j]);
        }
    }

    int result = 0;
    for(i = 0; i < studentnumber; i++){
        for(j = 0; j < scorenumber; j++){
            if(answer[j] == student[i][j]){
            	result += fullmark[j];
			} 
        }
        printf("%d\n",result);
        result = 0;
    }
    
    // printf("%d",result);
    
    
}


