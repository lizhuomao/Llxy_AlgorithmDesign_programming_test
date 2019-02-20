#include <stdio.h>

int main(){
	char a[90];
	char b[90];
	int flag = 0;
	
	char restc[90];
	scanf("%s",a);
	scanf("%s",b);
//	printf("%s %s",a,b);
	int i = 0,j = 0,q = 0,index = 0;
	while(a[i] != '\0'){
		flag = 0;
		if(a[i] == b[j]){
			i++;
			j++;
		}else{
			char temp;
			if(a[i] >= 'a' && a[i] <= 'z'){
				temp = a[i]-32;
			}else{
				temp = a[i];
			}
			for(index = 0; index < q; index++){
				
				if(temp == restc[index]){
					flag = 1;
					break;
				}
			}
			if(flag != 1){
				restc[q++] = temp;
			}
			
			i++;
		}
	}
	restc[q] = '\0';

	printf("%s",restc);
	
	return 0;
}




