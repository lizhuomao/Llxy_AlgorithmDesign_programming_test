#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

std::vector<int> v;
unsigned int n;

unsigned int data[100000], sortdata[100000];
int main(){
	
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		scanf("%d",&data[i]);
		sortdata[i] = data[i];
	} 
	sort(sortdata, sortdata + n);
	int max = 0;
	for(int i = 0; i < n; i++){
		if(data[i] == sortdata[i] && data[i] > max){
			v.push_back(data[i]);
			
		}
		if(data[i] > max){
			max = data[i];
		}
	}
	printf("%d\n",v.size());
	for(int i = 0; i < v.size(); i++){
		if(i != 0){
			printf(" ");
		} 
		printf("%d",v[i]);
	}
	printf("\n");
	return 0;
		
	
	return 0;
} 
