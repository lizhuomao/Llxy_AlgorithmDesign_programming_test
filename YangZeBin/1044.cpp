#include <stdio.h>
#include <string.h>

int main(){
	int number;
	scanf("%d",&number);
	char mars[13][5] = {"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
	char marswei[12][4] = {"tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};
	char data[number][11];
	int i = 0;
	getchar();
	for(i = 0; i < number; i++){
		int j = 0;
		while((data[i][j++] = getchar()) != '\n');
		data[i][j] = '\0';
	}
	
	for(i = 0; i < number; i++){
		
		if(data[i][0] >= '0' && data[i][0] <= '9'){
			int digtal = 0,q = 0;
			int a = strlen(data[i])-1;
			while(a > q){
				digtal = digtal * 10 + data[i][q] - '0';
				q++;
			}
			if(digtal >= 169) break;
			
			int shiwei,gewei;
			shiwei = digtal / 13;
			gewei = digtal % 13;
			if(shiwei > 0 && gewei != 0){
				printf("%s %s\n",marswei[shiwei-1],mars[gewei]);
//				printf("%c%c%c %c%c%c\n",marswei[shiwei-1][0],marswei[shiwei-1][1],marswei[shiwei-1][2],mars[gewei][0],mars[gewei][1],mars[gewei][2]);
			}else if(shiwei > 0 && gewei == 0){
				printf("%s\n",marswei[shiwei-1]);
			}else if(shiwei == 0){
				printf("%s\n",mars[gewei]);
			}
		
			
		}else if(data[i][0] >= 'a' && data[i][0] <= 'z'){
			 int datalen,q = 0,k = 0,flag = 0;
			 datalen = strlen(data[i]);
			 if(datalen > 5){
			 	char shiwei[4],gewei[4];
			 	int dshiwei,dgewei;
			 	while(q < 3){
			 		shiwei[q] = data[i][q];
			 		q++;
				}
				shiwei[q] = '\0';
				q = 0;
				while(q < 3){
					gewei[q] = data[i][q + 4];
					q++;
				}
				gewei[q] = '\0';
				
				for(k = 0; k < 12; k++){
					if(strcmp(shiwei,marswei[k]) == 0){
						dshiwei = k+1;
						break;
					}
				}
				for(k = 0; k < 13; k++){
					if(strcmp(gewei,mars[k]) == 0){
						dgewei = k;
						break;
					}
				}
				printf("%d\n",dshiwei * 13 + dgewei); 
				
			 	
			 }else if(datalen <= 5){
			 	int dgewei;
			 	char gewei[4];
			 	int q = 0;
			 	int len;
			 	if (datalen == 5){
			 		len = 4;
				 }else{
				 	len = 3;
				 }
			 	while(q < len){
					gewei[q] = data[i][q];
					q++;
				}
				gewei[q] = '\0';
				q = 0;
				for(k = 0; k < 13; k++){
					if(strcmp(gewei,mars[k]) == 0){
						dgewei = k;
						flag = 1;
						break;
					}
				}
				if(flag == 0){
					for(k = 0; k < 13; k++){
						if(strcmp(gewei,marswei[k]) == 0){
							dgewei = (k+1)*13;
							break;
						}
					}
				}
				
				printf("%d\n",dgewei);
			 }
		}
	}
	
	
	;
	return 0;
} 
