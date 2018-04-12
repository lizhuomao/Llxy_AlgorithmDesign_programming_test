#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
typedef struct stu{
	char name[10];
	int virtue;
	int ability;
}STU;

vector<stu> a, b, c, d; 

int cmp(STU a, STU b){
	int sum = a.ability+a.virtue;
	int sum1 = b.ability+b.virtue;
	if(sum == sum1){
		if(a.virtue == b.virtue){
			return strcmp(a.name,b.name)<0;
		}else{
			return a.virtue>b.virtue;
		}
	}else{
		return sum>sum1;
	} 
}
int main(){
	STU temp;
	int j=0, i;
	int N, L, H;
	scanf("%d%d%d", &N, &L, &H);
	for(i=0; i<N; i++){
		scanf("%s%d%d", temp.name, &temp.virtue, &temp.ability);
		if(temp.virtue>=L && temp.ability>=L){
			j++;
			if(temp.virtue>=H && temp.ability>=H){
				a.push_back(temp);
			}else if(temp.ability<H && temp.virtue>=H){
				b.push_back(temp);
			}else if(temp.virtue>=temp.ability && temp.ability<H && temp.virtue<H){
				c.push_back(temp);
			}else{
				d.push_back(temp);
			}
		}
	}
	printf("%d\n", j);
	sort(a.begin(), a.end(), cmp);
	sort(b.begin(), b.end(), cmp);
	sort(c.begin(), c.end(), cmp);
	sort(d.begin(), d.end(), cmp);
	for(i=0; i<a.size(); i++){
		printf("%s %d %d\n", a[i].name, a[i].virtue, a[i].ability);
	}
	for(i=0; i<b.size(); i++){
		printf("%s %d %d\n", b[i].name, b[i].virtue, b[i].ability);
	}
	for(i=0; i<c.size(); i++){
		printf("%s %d %d\n", c[i].name, c[i].virtue, c[i].ability);
	}
	for(i=0; i<d.size(); i++){
		printf("%s %d %d\n", d[i].name, d[i].virtue, d[i].ability);
	}
	return 0;
}