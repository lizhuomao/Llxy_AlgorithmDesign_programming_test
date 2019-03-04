#include <stdio.h>

int main(){
    int chip,times,i,j;
    scanf("%d%d",&chip,&times);
	int round[times][4];
	for(i = 0; i < times; i++){
//		for(j = 0; j < 4; j++){
			scanf("%d%d%d%d",&round[i][0],&round[i][1],&round[i][2],&round[i][3]);
//		}
	}
	
	for(i = 0; i < times; i++){
		if(chip <= 0){
			printf("Game Over.\n");
			break;
		}else
		if(round[i][2] > chip){
			printf("Not enough tokens.  Total = %d.\n",chip);
		}else if((round[i][0] > round[i][3] && round[i][1] == 0) || (round[i][0] < round[i][3] && round[i][1] == 1) ){
			
			chip += round[i][2];
			printf("Win %d!  Total = %d.\n",round[i][2],chip);
			
		}else if((round[i][0] > round[i][3] && round[i][1] == 1) || (round[i][0] < round[i][3] && round[i][1] == 0)){
			chip -= round[i][2];
			printf("Lose %d.  Total = %d.\n",round[i][2],chip);
		}
	}
}


