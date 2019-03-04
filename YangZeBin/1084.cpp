#include <stdio.h>
#include <string.h>
int main(){
	char data[500000];
	int number;
	scanf("%s%d",&data,&number);
	int q = 0;
	for(q = 0; q < number-1; q++){
		int i = 0,t = 0;
		char data1[500000];
		while(data[i] != '\0'){
			
			int j = 0;
			j = i;
			while(data[++j] == data[i]);
//			printf("%c",data[i]);
//			printf("%d",j-i);
			data1[t++] = data[i];
			data1[t++] = j-i + '0';
			i = j;
		}
		data1[t] = '\0';
//		printf("%s\n",data1);
		strcpy(data,data1); 
	}
	
	printf("%s",data);
	return 0;

} 



