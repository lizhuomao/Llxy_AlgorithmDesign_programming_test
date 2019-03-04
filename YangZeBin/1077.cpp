#include <stdio.h>
#include <math.h>

int main(){
	int number,fullmark;
	scanf("%d%d",&number,&fullmark);
	
	int score[number][number];
	int count[number];
	int avercount[number];
	int i = 0,j = 0;
	for(i = 0; i < number; i++){
		for(j = 0; j < number; j++){
			scanf("%d",&score[i][j]);
			
		}
		count[i] = number-1;
		avercount[i] = 0;
	}
	
	for(i = 0; i < number; i++){
		int max = 0,min = 50;
		for(j = 1; j < number; j++){
			avercount[i] += score[i][j];
			if(score[i][j] < 0 || score[i][j] > fullmark){
				count[i]--;
				avercount[i] -= score[i][j];
			}else{
				if(score[i][j] > max){
					max = score[i][j];
					
				} 
				if(score[i][j] < min){
					min = score[i][j];
					
				}
			}
			
		}
		avercount[i] -= max;
		avercount[i] -= min;
		count[i] -= 2;
		double averscore = (double)avercount[i] / count[i];
		int finalscore = floor((averscore + score[i][0])/2 + 0.5);
		printf("%d\n",finalscore);
	}
	

	
	return 0;

} 



