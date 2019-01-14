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
	int firstaddress, nodeNums, K;
	
	scanf("%d%d%d",&firstaddress,&nodeNums,&K);
	
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
	
	
	
	vector<node> underzero;
	vector<node> zerotoK;
	vector<node> aboveK;
	vector<node> all;
	int a = 0,b = 0,c = 0;
	for(int i = 0; i < list.size(); i++){
		if(list[i].data < 0){
			underzero.push_back(list[i]);
		}else if(list[i].data >= 0 && list[i].data <= K){
			zerotoK.push_back(list[i]);
		}else{
			aboveK.push_back(list[i]);
		}
	}
	
	for(int i = 0; i < underzero.size(); i++){
		all.push_back(underzero[i]);
	}
	for(int i = 0; i < zerotoK.size(); i++){
		all.push_back(zerotoK[i]);
	}
	for(int i = 0; i < aboveK.size(); i++){
		all.push_back(aboveK[i]);
	}
	
	int i;
	for(i = 0; i < all.size()-1; i++){
		printf("%05d %d %05d\n",all[i].address,all[i].data,all[i+1].address);
	}
	printf("%05d %d -1\n",all[i].address,all[i].data);
	return 0;	
} 
