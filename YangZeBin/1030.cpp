#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n,p;
	cin >> n >> p;
	long data[n],temp;
	for(int i = 0; i < n; i++){
		cin >> data[i];
	}
	
	sort(data,data+n);
	long max1 = 0;
	for(int i = 0; i < n; i++){
		temp = upper_bound(data+i,data+n,data[i] * p)- data;
		max1 = max(max1,temp-i);
	}
	cout << max1;
	
	return 0;
}
