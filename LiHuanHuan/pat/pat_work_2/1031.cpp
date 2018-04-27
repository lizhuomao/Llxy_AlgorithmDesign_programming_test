#include<iostream>//lh 
using namespace std;

int main()
{
	int w[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char z[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
	int n,j,sum=0,count=0;
	cin>>n;
	string s[n+1];
	for(int i=0;i<n;i++)
		cin>>s[i];
	for(int i=0;i<n;i++){
	sum=0;
	for( j=0;j<17;j++){
		if(s[i][j]>'9'&&s[i][j]<'0'){
		cout<<s[i]<<"\n";
		count++;break;}
		else
		sum += (s[i][j]-'0')*w[j]; 
	}
	sum=sum%11;
	if(j==17) 
	if(z[sum]!=s[i][17]){
		cout<<s[i]<<"\n";
		count++;
	}	
	}
	if(count==0) 
	cout<<"All passed";
	return 0;
}
