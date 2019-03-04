#include <stdio.h>
#include <string.h>
int main(){
	int number,interval,order;
	scanf("%d%d%d",&number,&interval,&order);
	char name[number][50];
	char hit[number][50];
	int i;
	for(i = 0; i < number; i++){
		scanf("%s",&name[i]);
		hit[i][0] = '\0';
	}
	if(order > number){
		printf("Keep going...\n");
		return 0;
	}
	int j = order-1,q = 0;
	
	
	while(j < number){
		
		
		for(i = 0; i < number; i++){
			if(strcmp(name[j],hit[i]) == 0){
				j++;
				i = 0;
			}
		}
		printf("%s\n",name[j]);
		strcpy(hit[q++],name[j]);
		j += interval; 
		
	}
	
	
	return 0;
}




