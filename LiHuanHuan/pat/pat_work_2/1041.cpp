#include<stdio.h>
#include <iostream>
using namespace std; //lh 
struct stu{
	char a[20];
	int f,s;
};
int main()
{
	int a,b,b1;
	scanf("%d",&a);
	struct stu ks[a];
	for(int i=0;i<a;i++){
		scanf("%s %d %d",&ks[i].a,&ks[i].f,&ks[i].s);
	}
	scanf("%d",&b);
	for(int j=0;j<b;j++){
	scanf("%d",&b1);
	for(int i=0;i<a;i++){
	if(b1==ks[i].f)
		printf("%s %d\n",ks[i].a,ks[i].s);
	}
	}	
	return 0;
}
