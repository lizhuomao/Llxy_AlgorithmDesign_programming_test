#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int number;
	scanf("%d",&number);
	char data[10000];
	int i = 0,j = 0;

	char data1[number][1000];
	
	
	for(j = 0; j < number;j++){
		scanf("%s",data1[j]);
	}
	
	int count = 0;
	double dcount = 0.0;
	int recrod = 0;
	for(j = 0; j < number;j++){
		int i = 0;
		int dot = 0;
		int xiaoshuwei = 0;
		int zhengshuwei = 0;
		int inleg = 0;
		int fuhao = 0;
		for(i = 0; data1[j][i] != '\0'; i++){
			if(dot == 1 && data1[j][i] >= '0' && data1[j][i] <= '9'){
				xiaoshuwei++;
			}else if(dot == 0 && data1[j][i] >= '0' && data1[j][i] <= '9'){
				zhengshuwei++;
			}else if(data1[j][i] == '.'){
				dot++;
			}else if(data1[j][i] == '-'){
				fuhao++;
			}else if(data1[j][i] < '0' || data1[j][i] > '9'){
				inleg++;
			}
		}
		
		if(zhengshuwei > 0 && xiaoshuwei <=2 && dot <= 1 && inleg == 0 && fuhao < 2){
			double b = atof(data1[j]);
			if(b <= 1000.0 && b >= -1000.0){
				dcount += b;
				count++;
				recrod++;
			}else{
				printf("ERROR: %s is not a legal number\n",data1[j]);
			}
		}else{
			printf("ERROR: %s is not a legal number\n",data1[j]);
		}
	}
	
	if(recrod != 0 && count > 1){
		printf("The average of %d numbers is %.2lf\n",count,(double)dcount/count);
	}else if(recrod != 0 && count == 1){
		printf("The average of %d number is %.2lf\n",count,(double)dcount/count);
	}else{
		printf("The average of 0 numbers is Undefined\n");
	}
	
	
	return 0;
} 
