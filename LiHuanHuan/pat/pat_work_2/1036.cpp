#include<iostream> 
#include<string.h>//lh 
using namespace std;
int main()
{
	int i,n;
	char a;
	scanf("%d %c",&i,&a);
	n=(i-2)/2;
	if(i%2==1) n++;
	for(int k=0;k<i;k++)
		cout << a;
		cout<< "\n";
	for(int j=0;j<n-1;j++){	
	cout<<a;
	for(int k=0;k<i-2;k++)
		cout<<" ";
	cout<<a<<"\n";
	}
	for(int k=0;k<i;k++)
		cout<<a;	
	return 0;
}
