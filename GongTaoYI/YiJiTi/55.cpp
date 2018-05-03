#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
	char name[9];
	int scroe;
}stu;

void print(stu student[], int n);
void quick_swap(stu student[], int left, int right);
int main()
{
	int n, k, i, j;
	int m;
	scanf("%d%d", &n, &k);
	stu * Student = (stu *)malloc(n*sizeof(stu)), *q=Student;
	stu p;
	for(i=0; i<n; i++){
		scanf("%s%d", &Student[i].name, &Student[i].scroe);
	}
	quick_swap(Student, 0, n-1);
	/*for(i=0; i<n-1; i++){
		for(j=i; j<n; j++){
			if(Student[i].scroe < Student[j].scroe)
			{
				p = Student[i];
				Student[i] = Student[j];
				Student[j] = p;
			}else if(Student[i].scroe == Student[j].scroe){
				if(strcmp(Student[i].name, Student[j].name) > 0){
					p = Student[i];
					Student[i] = Student[j];
					Student[j] = p;
				}
			}
		}
	}*/
	m = n/k+n%k;
	print(Student, m);
	for(Student+=n/k+n%k; Student < q+n; Student+=n/k){
		print(Student, n/k);
	}
	return 0;
}
void print(stu student[], int n)
{
	int i;
	for(i=n/2*2-1; i>0; i-=2){
		printf("%s ", student[i].name);
	}
	for(i = 0; i<n; i+=2){
		if(i+2>=n){
			printf("%s\n", student[i].name);
			break;
		}
		printf("%s ", student[i].name);
	}
}
void quick_swap(stu student[], int left, int right){
	if(left>=right){
		return;
	}
	int i=left, j=right;
	stu key=student[left];
	while(i<j){
		while(i<j && key.scroe >= student[j].scroe){
			if(key.scroe == student[j].scroe)
			{
				if(strcmp(key.name, student[j].name) > 0){
					break;
				}
			}
			j--;
		}
		
		student[i] = student[j];
		while(i<j && key.scroe <= student[i].scroe){
			if(key.scroe == student[i].scroe)
			{
				if(strcmp(key.name, student[i].name) < 0){
					break;
				}
			}
			i++;
		}
		student[j] = student[i];
	}
	student[i] = key;
	quick_swap(student, left, i - 1);
	quick_swap(student, i+1, right);
}