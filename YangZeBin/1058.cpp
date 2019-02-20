#include <stdio.h>
#include <math.h>
#include <string.h> 
struct multiple{
	int fullMark;
	int choiceNumber;
	int correctNumber;
	char correct[10];
};

struct studentOfOne{
	int choiceNumber;
	char check[10];
};

int main(){
	int studentNumber,multipleNumber;
	scanf("%d%d",&studentNumber,&multipleNumber);
	int i,j;
	struct multiple m[multipleNumber];
	int errorcount[multipleNumber];
	for(i = 0 ; i < multipleNumber; i++){
		errorcount[i] = 0;
		scanf("%d%d%d",&m[i].fullMark,&m[i].choiceNumber,&m[i].correctNumber);
		char c;
		int q = 0;
		while((c = getchar()) != '\n'){
			if(c >= 'a' && c <= 'z'){
				m[i].correct[q++] = c;
			}
		}
		m[i].correct[q] = '\0';
//		getchar();
	}
	struct studentOfOne s[studentNumber][multipleNumber];
	for(i = 0; i < studentNumber; i++){
		int q = 0;
		while(q < multipleNumber){
			int flag = 0,p = 0;
			while(flag < 2){
				char c;
				if((c = getchar()) == '('){
					flag++;
				}else if(flag == 1 && c >= '0' && c <= '9'){
					s[i][q].choiceNumber = c-'0';
				}else if(c >= 'a' && c <= 'z'){
					s[i][q].check[p++] = c;
				}else if(c == ')'){
					flag++;
				}
			}
			s[i][q].check[p] = '\0';
			q++;
		}
	}
	int studentscore[studentNumber];
	
	
	for(i = 0; i < studentNumber; i++){
		studentscore[i] = 0;
		for(j = 0; j < multipleNumber; j++){
			if(strcmp(s[i][j].check,m[j].correct) == 0){
				studentscore[i] += m[j].fullMark;
			}else{
				errorcount[j]++;
			}
		}
		printf("%d\n",studentscore[i]);
	}
	
	int max = 0;
	for(j = 0; j < multipleNumber; j++){
		if(errorcount[j] > max){
			max = errorcount[j];
		}
	}
	if(max > 0){
		printf("%d",max);
		for(j = 0; j < multipleNumber; j++){
			if(errorcount[j] == max){
				printf(" %d",j+1);
			}
		}
	}else{
		printf("Too simple");
	}
	
	
	;
	return 0;
} 
