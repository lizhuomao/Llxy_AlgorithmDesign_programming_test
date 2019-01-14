#include <stdio.h>
//int main(){
//	long number[10000] = {0};
//	int i = 0;
//	while(scanf("%ld",&number[i]) == 1 && number[i] != 0) i++;
//	int j = 0;int flag = 0;
//	for(j = 0; j <= i; j+=2){
//		int a,b;
//		a = number[j] * number[j+1];
//		b = number[j+1] -1;
//		
//		if(number[j] == 0 && number[j+1] == 0 && flag == 0){
//			printf("0 0");
//			break;
//		}
//		
//		if(b != -1){
//		    if(flag == 0){
//				flag = 1;
//	  		}else{
//	  		  printf(" ");
//	  		}
//			printf("%d %d",a,b);
//		}
//	}
//	
//	return 0;
//}


int main()
{
    int flag=0;
    int coe, exp;
    while(1)
    {
        scanf("%d%d",&coe,&exp);
        if(exp)
        {
            if(flag)printf(" ");
            printf("%d %d",coe*exp,exp-1);
            flag=1;
        }
        if(getchar()!=' ') break;
    }
if(!flag)printf("0 0");

    return 0;
}

