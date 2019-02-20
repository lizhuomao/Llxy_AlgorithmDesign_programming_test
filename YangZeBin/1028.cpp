#include <stdio.h>
struct human{
	char name[6];
	int year;
	int month;
	int day;
};

int main(){
	int number,i,count = 0;
	int maxage[2],minage[2];
	scanf("%d",&number);
	struct human h[number];
	for(i = 0; i < number; i++){
		scanf("%s%d/%d/%d",&h[i].name,&h[i].year,&h[i].month,&h[i].day);
	}
	maxage[0] = 20140906;
	maxage[1] = -1;
	minage[0] = 0;
	minage[1] = -1;
	
	
	for(i = 0; i < number; i++){
		unsigned int a = (h[i].year * 100 + h[i].month) * 100 + h[i].day;
		if(a >= 18140906 && a <= 20140906){
			count++;
			if(a < maxage[0]){
				maxage[0] = a;
				maxage[1] = i;
			}
			if(a > minage[0]){
				minage[0] = a;
				minage[1] = i;
			}
		}
	}
	
	
	if(maxage[1] >= 0 && maxage[1] < number && minage[1] >= 0 && minage[1] < number){
		printf("%d %s %s",count,h[maxage[1]].name,h[minage[1]].name);
	}else{
		printf("%d",count);
	}
	
	return 0;
}




