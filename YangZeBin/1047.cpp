#include <stdio.h>
struct student{
	
}; 

int main(){
	int a;
	scanf("%d",&a);
	int teamnumber;
	int number;
	int score;
	struct student s[a];
	int i;
	int count[1001] = {0};
	for(i = 0; i < a;i++){
		scanf("%d-%d%d",&teamnumber,&number,&score);
		count[teamnumber] += score;
	}
	
	int maxscore = 0,q = 0;
	for(i = 0; i < 1000;i++){
		if(count[i] > maxscore){
			maxscore = count[i];
			q = i;
		}
	}
	
	printf("%d %d",q,maxscore);
	
	;
	return 0;
	
}




