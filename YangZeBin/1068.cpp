#include <stdio.h>
#include <math.h>
int main(){
	int row,col;
	int threshold;
	scanf("%d%d%d",&row,&col,&threshold);
	int data[col * row];
	int count[col * row];
	int i,j,q = 0;
	for(i = 0; i < col * row ; i++){
		scanf("%d",&data[i]);
		count[i] = 0;
	}
	for(i = 0; i < col * row ; i++){
		for(j = 0; j < col * row ; j++){
			if(j == i) continue;
			if(data[i] == data[j]){
				count[i]++;
				break;
			}
		}
	}
	int a1 = 0,b1 = 0,ci = 0,count2 = 0;
	for(i = 0; i < col * row ; i++){
		if(count[i] == 0){
			int a = 0,b = 0;
			b = i % row;
			a = (i-b)/row;
//			printf("%d %d ",a,b);
			
			int flag = 0;
			//��ͷ
			int first = 0; 
			if(a == 0 && b == 0) first = 1;
			//��β 
			int last = 0; 
			if(a == col-1 && b == row-1) last = 1;
			
			
			//�����ұ߽硣
			int border1 = 0,border2 = 0;
			//�ұ߽�  --  ���� ���� �� 
			if(b == row-1) border2 = 1;
			//��߽�  --  ���� �� ���� 
			if(a > 0 && b == 0) border1 = 1;
			
//			//����  -- 
//			int zuoxia = 0; 
			
			//�� 
			if((a-1)*row+b >= 0 && (a-1)*row+b < col*row){
				if(abs(data[i] - data[(a-1)*row+b]) > threshold) flag++;
			}else{
				flag++;
			}
			//�� zuo
			if((a-1)*row+b-1 >= 0 && (a-1)*row+b-1 < col*row && border1 == 0){
				if(abs(data[i] - data[(a-1)*row+b-1]) > threshold) flag++;
			}else{
				flag++;
			}
			//�� you
			if((a-1)*row+b+1 >= 0 && (a-1)*row+b+1 < col*row && border2 == 0 && last == 0){
				if(abs(data[i] - data[(a-1)*row+b+1]) > threshold) flag++;
			}else{
				flag++;
			}
			//zuo
			if(a*row+b-1 >= 0 && a*row+b-1< col*row && border1 == 0){
				if(abs(data[i] - data[a*row+b-1]) > threshold) flag++;
			}else{
				flag++;
			}
			//you 
			if(a*row+b+1 >= 0 && a*row+b+1 < col*row && border2 == 0) {
				if(abs(data[i] - data[a*row+b+1]) > threshold) flag++;
			}else{
				flag++;
			}
			//xia 
			if((a+1)*row+b >= 0 && (a+1)*row+b < col*row){
				if(abs(data[i] - data[(a+1)*row+b]) > threshold) flag++;
			}else{
				flag++;
			}
			//xiazuo
			if((a+1)*row+b-1 >= 0 && (a+1)*row+b-1 < col*row && border1 == 0 && first == 0){
				if(abs(data[i] - data[(a+1)*row+b-1]) > threshold) flag++;
			}else{
				flag++;
			}
			//xiayou
			if((a+1)*row+b+1 >= 0 && (a+1)*row+b+1 < col*row && border2 == 0){
				if(abs(data[i] - data[(a+1)*row+b+1]) > threshold) flag++;
			}else{
				flag++;
			}
//			printf("%d\n",flag);
			if(flag == 8) {
				count2++;
				ci = data[i];
				a1 = a;
				b1 = b;
				if(count2 >= 2) break;
			}
		}
	}
	//[0,col*row) 
	//shang (a-1)*row+b shangzuo (a-1)*row+b-1 shangyou (a-1)*row+b+1
	//xia (a+1)*row+b xiazuo (a+1)*row+b-1 xiayou (a+1)*row+b+1
	//zuo a*row+b-1
	//you  a*row+b+1
	if(count2 == 1) printf("(%d, %d): %d",b1+1,a1+1,ci);
	if(count2 > 1) printf("Not Unique");
	if(count2 < 1) printf("Not Exist");
	
	return 0;
} 
