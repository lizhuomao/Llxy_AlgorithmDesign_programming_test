#include<iostream>
#include<algorithm>

using namespace std;
bool cmp1(int a, int b) {
    return a > b;
}
int main(){
	int nums;
	cin >> nums;
	int data[nums];
	for(int i = 0; i < nums; i++){
		cin >> data[i];
	}
	sort(data,data+nums,cmp1);
	int q = 0;
	while(data[q] > q+1) q++;
	cout << q;
	;
	
	return 0;
} 
 
