#include <stdio.h>
#include <string.h>

int main(){
	char arr[1010];
	int chushu,yushu,temp = 0;
	scanf("%s",arr);
	scanf("%d",&chushu);
	int i = 0;
	//�жϵ�һ�����ǲ��Ǵ��ڳ���
	//������ڣ�ֱ�����������õ�����*10+�¸�����
	//���С�ڣ������*10 + �¸�����
	//������
	if(strlen(arr) == 1 && (arr[i] - '0') < chushu){
		printf("%d",0);
	}
	
	if((arr[i] - '0') < chushu){
		temp = (arr[i] - '0');
		
	}else if(arr[i] - '0' >= chushu){
		printf("%d",(arr[i] - '0') / chushu);
		temp = (arr[i] - '0') % chushu;
	}
	for(i = 1;i < strlen(arr);i++){
		temp = temp * 10 +  (arr[i] - '0');
		if(temp < chushu) {
			printf("%d",0);continue;
		}
		printf("%d",temp / chushu);
		temp = temp % chushu;

	} 
	
	printf(" %d",temp);
	
	return 0;
}




