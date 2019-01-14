#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct node{
	int address;
	int data;
	int nextaddress;
	struct node* next;
};

node * getPosition(node * a, int p){
	node* head = a;
	while(p){
		head = head->next;
		p--;
	}
	return head;
}

int main(){
	int firstaddress, nodeNums, reversalNum;
	
	cin >> firstaddress >> nodeNums >> reversalNum;
	
	map<int,node> n ;
	vector<node> list;
	for(int i = 0; i < nodeNums; i++){
		int d;
		cin >> d;
		cin  >> n[d].data >> n[d].nextaddress;
		n[d].address = d;
	}
	int j = 0;
	//将元素按结点地址顺序排列。 
	list.push_back(n[firstaddress]);
	while(list[list.size()-1].nextaddress != -1){
		list.push_back(n[list.back().nextaddress]);
	}
	
	int len = list.size();
	int start = 0;
	int end = start + reversalNum;
	while(end <= len){
		for(int i=start; i<start + reversalNum/2; i++) swap(list[i],list[end-1-i+start]);
		
		start = end;
		end += reversalNum;
	}
	int i;
	for(i = 0; i < list.size()-1; i++){
		printf("%05d %d %05d\n",list[i].address,list[i].data,list[i+1].address);
	}
	printf("%05d %d %d\n",list[i].address,list[i].data,-1);
	
	return 0;
} 
