#include <stdio.h> 
int main(){
	int input,count =0,c;
	scanf("%d",&input);
	int  callatz(int input,int count);
	c= callatz(input,count);
	printf("%d",c);
}
int callatz(int input,int count){
	while(input != 1){
		count++;
		if((input % 2) == 0){
			input /= 2;
		}else{
			input = ((3 * input)+1)/2; 
		} 
	}
	return count;
}
