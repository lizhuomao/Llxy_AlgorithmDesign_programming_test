#include <stdio.h>
#include <math.h>

int main(){
	int number;
	scanf("%d",&number);
	double a[10010] = {0.0};
	int i = 0;
	for(i = 0; i < number; i++){
		int ID,X,Y;
		scanf("%d%d%d",&ID,&X,&Y);
		double distance = 0.0;
		distance = sqrt(pow(abs(X),2)+ pow(abs(Y),2));
		if(distance == 0.0) distance = -1.0;
		a[ID] = distance;
	}
//	double max = 0.0,min = 20010.0;
	int maxi = 0,mini = 0;int flag = 1;
	for(i = 0; i < 10010;i++){
		
		if(a[i] != 0){
			if(flag){
				mini = i;
				maxi = i;
				flag = 0;
				continue;
			}
			
			if(a[i] > a[maxi]){
				maxi = i;
			}
			if(a[i] < a[mini]){
				mini = i;
			}
		}
	}
	
	printf("%04d %04d",mini,maxi);
	
	
	return 0;

} 



