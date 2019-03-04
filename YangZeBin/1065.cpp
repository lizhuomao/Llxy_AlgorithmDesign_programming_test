#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
using namespace std;

bool canfinddata(int a[],int size, int data){
	for(int i = 0; i < size; i++){
		if(a[i] == data) return true;
	}
	return false;
}
int main(){
	int nums;
	cin >> nums;
	map<int,int> m;
	for(int i = 0; i < nums; i++){
		int a,b;
		cin >> a >> b;
		m[a] = b;
		m[b] = a;
	}
	int n;
	cin >> n;
	int a[n];
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	for(int i = 0; i < n; i++){
		if(m[a[i]] != 0 && canfinddata(a,n,m[a[i]])){
			continue;
		}else if(m[a[i]] == 0 && m[0] == a[i]){
			continue;
		}
		
//		cout << a[i] << endl;
		v.push_back(a[i]);
	}
	sort(v.begin(),v.end());
	cout << v.size() << endl;
	if(v.size() == 0) return 0; 
	for(int i = 0; i < v.size(); i++){
		if(i > 0) cout << " ";
		printf("%05d",v[i]);
	}
	cout <<  endl;
	return 0;
} 
