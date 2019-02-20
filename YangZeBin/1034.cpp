#include <bits/stdc++.h>
 
using namespace std;
 
long long GCD(long long a, long long b) {  //求最大公约数
	long long m = a % b;
	while(m) {
		a = b;
		b = m;
		m = a % b;
	}
	return b;
}
void PrintFraction(long long a, long long b) {  //将一个分数以规定形式输出
	long long k = 1;
	if(b == 0) {
		cout<<"Inf";
		return;
	}
	if(a < 0) {
		a = -a;
		k = -1;
	}
	long long gcd = GCD(a, b);
	a /= gcd;    //分子分母分别除以最大公约数完成约分
	b /= gcd;
	if(a / b == 0 && a != 0) {    //因为正负号储存在k里，k为0的时候无法区别，在这一步处理
		if(k > 0)
			cout<<a<<"/"<<b;
		else
			cout<<"(-"<<a<<"/"<<b<<")";
		return;
	}
	k = k * a / b;    //得到整数部分
	a %= b;        //得到分子部分
	if(b == 1 && k < 0)
		cout<<"("<<k<<")";
	else if(b == 1 && k >= 0)  //分子为0,或者分母为1，结果都是整数，直接输出分子部分（不输出分母）
		cout<<k;
	else if(k < 0)
		cout<<"("<<k<<" "<<a<<"/"<<b<<")";
	else
		cout<<k<<" "<<a<<"/"<<b;
}
void judge(long long a1, long long b1, long long a2, long long b2, char ch) {  //输出一个表达式
	long long c1, c2;
	PrintFraction(a1, b1);      //范式输出第一个操作数
	cout<<" "<<ch<<" ";     //输出操作符
	PrintFraction(a2, b2);      //范式输出第二个操作数
	cout<<" = ";          //输出等号
	switch(ch) {          //范式输出结果
		case '+':
			c1 = a1 * b2 + a2 * b1;
			c2 = b1 * b2;
			PrintFraction(c1, c2);
			cout<<endl;
			break;
		case '-':
			c1 = a1 * b2 - a2 * b1;
			c2 = b1 * b2;
			PrintFraction(c1, c2);
			cout<<endl;
			break;
		case '*':
			c1 = a1 * a2;
			c2 = b1 * b2;
			PrintFraction(c1, c2);
			cout<<endl;
			break;
		case '/':
			c1 = a1 * b2;
			c2 = b1 * a2;
			if(c2 < 0) {    //确保PrintFraction函数的b是正数
				c2 = -c2;
				c1 = -c1;
			}
			PrintFraction(c1, c2);
			cout<<endl;
			break;
	}
}
int main() {
	long long a1, b1, a2, b2;
	cin>>a1;
	getchar();
	cin>>b1;
	cin>>a2;
	getchar();
	cin>>b2;
	judge(a1, b1, a2, b2, '+');
	judge(a1, b1, a2, b2, '-');
	judge(a1, b1, a2, b2, '*');
	judge(a1, b1, a2, b2, '/');
	return 0;
}
