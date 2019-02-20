#include <bits/stdc++.h>
 
using namespace std;
 
long long GCD(long long a, long long b) {  //�����Լ��
	long long m = a % b;
	while(m) {
		a = b;
		b = m;
		m = a % b;
	}
	return b;
}
void PrintFraction(long long a, long long b) {  //��һ�������Թ涨��ʽ���
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
	a /= gcd;    //���ӷ�ĸ�ֱ�������Լ�����Լ��
	b /= gcd;
	if(a / b == 0 && a != 0) {    //��Ϊ�����Ŵ�����k�kΪ0��ʱ���޷���������һ������
		if(k > 0)
			cout<<a<<"/"<<b;
		else
			cout<<"(-"<<a<<"/"<<b<<")";
		return;
	}
	k = k * a / b;    //�õ���������
	a %= b;        //�õ����Ӳ���
	if(b == 1 && k < 0)
		cout<<"("<<k<<")";
	else if(b == 1 && k >= 0)  //����Ϊ0,���߷�ĸΪ1���������������ֱ��������Ӳ��֣��������ĸ��
		cout<<k;
	else if(k < 0)
		cout<<"("<<k<<" "<<a<<"/"<<b<<")";
	else
		cout<<k<<" "<<a<<"/"<<b;
}
void judge(long long a1, long long b1, long long a2, long long b2, char ch) {  //���һ�����ʽ
	long long c1, c2;
	PrintFraction(a1, b1);      //��ʽ�����һ��������
	cout<<" "<<ch<<" ";     //���������
	PrintFraction(a2, b2);      //��ʽ����ڶ���������
	cout<<" = ";          //����Ⱥ�
	switch(ch) {          //��ʽ������
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
			if(c2 < 0) {    //ȷ��PrintFraction������b������
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
