#include <stdio.h>
#include <stdlib.h> 
struct mooncake{
	double count;
	double cost;
	double unitcost;
};

int cmpfunc (const void * a, const void * b)
{
  if (*(double*)a > *(double*)b)
    return -1;
  else if (*(double*)a < *(double*)b)
    return 1;
  else
    return 0;  
}

int main(){
	int kind,countnumber;
	double total = 0.0;
	
	scanf("%d%d",&kind,&countnumber);
	struct mooncake m[kind];
	double q[kind];
	
	int i,j;

	for(j = 0; j < kind; j++){
		scanf("%lf",&m[j].count);
	}
	for(j = 0; j < kind; j++){
		scanf("%lf",&m[j].cost);
		m[j].unitcost = m[j].cost / m[j].count;
		q[j] = m[j].unitcost;
	}
	
	qsort(q,kind,sizeof(double),cmpfunc);
	for(i = 0; i < kind; i++){
		if(countnumber <= 0){
			break;
		}
		
		for(j = 0; j < kind; j++){
			if(q[i] == m[j].unitcost){
				if(countnumber >= m[j].count){
					total += m[j].cost;
					countnumber -= m[j].count;
					break;
				}else if(countnumber < m[j].count && countnumber > 0){
					total += m[j].unitcost * countnumber;
					countnumber = 0;
					break;
				}
			}
			
			
		}
	}
	printf("%.2lf",total);	

	return 0;
}
