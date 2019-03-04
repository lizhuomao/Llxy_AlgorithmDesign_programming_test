#include <stdio.h>
#include <string.h>
int main(){
	char password[50];
	int count;
	scanf("%s%d",password,&count);
	char c;
	c = getchar();
	char trypassword[50];
	while(count-- > 0){
		int i = 0;
		while((trypassword[i++] = getchar()) != '\n');
//		getchar();
		trypassword[--i] = '\0';

		if(strcmp(trypassword,"#") == 0){
			return 0;
		}else if(strcmp(trypassword,password) == 0){
			printf("Welcome in");
			return 0;
		}else{
			printf("Wrong password: %s\n",trypassword);
		}	
	}
	printf("Account locked");
	return 0;
	
	return 0;
}




