#include <stdio.h>

int main(){
	int number1,i;
	int jiawincount = 0, yiwincount = 0, balance = 0;
	int jiachar[3] = {0}, yichar[3] = {0}; 
	
	scanf("%d",&number1);
	char number[number1][2]; 
	for(i = 0; i < number1; i++){
		scanf("%s",&number[i][0]);
		scanf("%s",&number[i][1]);
	}
	
	for(i = 0; i < number1; i++){
		if(number[i][0]== 'B' && number[i][1] == 'B'){
			balance++;
		}else if(number[i][0]== 'B' && number[i][1] == 'C'){
			jiawincount++;
			jiachar[0]++;
		}else if(number[i][0]== 'B' && number[i][1] == 'J'){
			yiwincount++;
			yichar[2]++;
		}else if(number[i][0]== 'C' && number[i][1] == 'B'){
			yiwincount++;
			yichar[0]++;
		}else if(number[i][0]== 'C' && number[i][1] == 'C'){
			balance++;
			
		}else if(number[i][0]== 'C' && number[i][1] == 'J'){
			jiawincount++;
			jiachar[1]++;
		}else if(number[i][0]== 'J' && number[i][1] == 'B'){
			jiawincount++;
			jiachar[2]++;
		}else if(number[i][0]== 'J' && number[i][1] == 'C'){
			yiwincount++;
			yichar[1]++;
		}else if(number[i][0]== 'J' && number[i][1] == 'J'){
			balance++;
			
		}
	} 
	
	printf("%d %d %d\n",jiawincount,balance,yiwincount);
	printf("%d %d %d\n",yiwincount,balance,jiawincount);
	
	//返回三个数中的最大数
	if(jiachar[0] >= jiachar[1] && jiachar[0] >= jiachar[2]){
		printf("B ");
	} else if(jiachar[1] >= jiachar[0] && jiachar[1] >= jiachar[2]){
		printf("C ");
	}else if(jiachar[2] >= jiachar[0] && jiachar[2] >= jiachar[1]){
		printf("J ");
	}
	
	if(yichar[0] >= yichar[1] && yichar[0] >= yichar[2]){
		printf("B");
	} else if(yichar[1] >= yichar[0] && yichar[1] >= yichar[2]){
		printf("C");
	}else if(yichar[2] >= yichar[0] && yichar[2] >= yichar[1]){
		printf("J");
	}
	
	return 0;
}




