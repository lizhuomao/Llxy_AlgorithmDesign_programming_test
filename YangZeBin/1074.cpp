#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main(){
	string jinzhi;
	string a;
	string b;
	
	cin >> jinzhi;
	cin >> a;
	cin >> b;
	
	while(jinzhi.size() <= 20){
		jinzhi = '0' + jinzhi;
	}
	
	//¶ÔÆë 
	a = '0' + a;
	b = '0' + b;
	while(a.size() < b.size()){
		a = '0' + a;
	}
	while(a.size() > b.size()){
		b = '0' + b;
	}
	
	int jinwei = 0;
	int pa = a.size()-1;
	int pjinzhi = jinzhi.size()-1;
	string res = ""; 
	while(pa >= 0){
		int aa,bb;
		//×ªÊý×Ö 
		aa = a[pa] - '0';
		bb = b[pa] - '0';
		char c;
		int jinzhishu = (jinzhi[pjinzhi]- '0');
		if(jinzhishu == 0) jinzhishu = 10;
		c = (aa + bb + jinwei) %  jinzhishu + '0';
		res =  c + res;
		jinwei = (aa + bb + jinwei) / jinzhishu;
		pa--;
		pjinzhi--;
	}
	int i = 0;
	while(res[i] == '0') i++;
	
	
//	cout << jinzhi <<endl;
//	cout << a <<endl;
//	cout << b <<endl;
//	cout << res << endl;
	if(i == res.size()){
		cout << 0;
		return 0;
	} 
	while(i < res.size()){
		cout << res[i];
		i++;
	}
	return 0;
	
} 
