#include<iostream>
#include<algorithm>
#include<deque>
#include<vector>

using namespace std;
struct people{
	string name;
	int height;
};

int cmp(people * a, people * b){
	if(a->height == b->height){
		return a->name > b->name; 
	}
	return a->height < b->height;
}
int main(){
	int n,k;
	cin >>n >> k;
	int col = n/k;
	vector<people*> v;
	for(int i = 0;i < n; i++){
		people* p = new people;
		cin >> p->name >> p->height;
		v.push_back(p);
	} 
	sort(v.begin(),v.end(),cmp);
	
	deque<people*> d[k];
	int start = 0,end = col;
	int i;
	for(i = 0; i < k-1; i++){
		
		int youbiao = end-1;
		d[i].push_back(v[youbiao--]);
		int flag = 1;
		while(start <= youbiao){
			if(flag){
				d[i].push_front(v[youbiao--]);
				flag = 0;
			}else{
				d[i].push_back(v[youbiao--]);
				flag = 1;
			}
		}
		
		start = end;
		end += col;
//		for(int j = 0; j < d[i].size(); j++){
//			cout << d[i][j]->name << " ";
//		}
//		cout << endl;
	}
	
//	start = end;
	if(i < k){
		end = v.size();
		int youbiao = end-1;
		d[i].push_back(v[youbiao--]);
		int flag = 1;
		while(start <= youbiao){
			if(flag){
				d[i].push_front(v[youbiao--]);
				flag = 0;
			}else{
				d[i].push_back(v[youbiao--]);
				flag = 1;
			}
		}
	}
	
	
	for(int j = k-1; j >= 0; j--){
		for(int q = 0; q < d[j].size(); q++){
			if(q > 0){
				cout << " ";
			}
			cout << d[j][q]->name;
		}
		cout << endl;
	}
	
	
	return 0;
} 
