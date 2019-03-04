#include<algorithm>
#include<iostream>
using namespace std;
int main() {
	int nums;
	cin >> nums;
	double a[nums];
	for(int i = 0; i < nums; i++){
		cin >> a[i];
	}
	sort(a,a+nums);
	double res = a[0]/2 + a[1]/2;
	for(int i = 2; i < nums; i++){
		res = (res/2 + a[i]/2);
	}
	cout << (int)res << endl; 
	
	return 0;
}
