#include <stdio.h>
#include <string.h>
int main(){
	int number,stuffIDnumber; 
	scanf("%d%d",&number,&stuffIDnumber);
	
	int i;
	char stuffID[stuffIDnumber][200];
	for(i = 0; i < stuffIDnumber; i++){
		scanf("%s",stuffID[i]);
	} 
	
	int pcount= 0,stuffcount = 0;
	
	for(i = 0; i < number; i++){
		int stuffnumber;
		char name[10];
		int j = 0,flag = 0;
		scanf("%s%d",name,&stuffnumber);
		
		char stuff[stuffnumber][100];
		for(j = 0; j < stuffnumber; j++){
			scanf("%s",stuff[j]);
//			printf("%s ",stuff[j]);
			int k = 0;
			for(k = 0; k < stuffIDnumber;k++){
				if(strcmp(stuff[j],stuffID[k]) == 0){
					stuffcount++;
					if(flag == 1){
						printf(" %s",stuff[j]);
					}else{
						printf("%s: %s",name,stuff[j]);
						flag = 1;
						pcount++;
					}
				}
			}
		}
		if(flag == 1){
			printf("\n");
		}
		
	}
	printf("%d %d",pcount,stuffcount);
	
	return 0;

} 



