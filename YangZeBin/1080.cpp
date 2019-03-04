#include<iostream>
#include<map>
#include<string>
#include<math.h>
#include<vector>
#include<algorithm> 
using namespace std;


struct student{
	string ID;
	int gp;
	int gmid;
	int gfinal;
	int total;
	student(string ID,int gp, int gmid, int gfinal, int total):ID(ID),gp(gp),gmid(gmid),gfinal(gfinal),total(total){}
};
int cmp(student * a, student * b){
	if(a->total == b->total){
		return a->ID < b->ID;
	}
	return a->total > b->total;
}

map<string, student*> m;

int main(){
	int gpcot,gmcot,gfcot;
	cin >> gpcot >> gmcot >> gfcot;
	for(int i = 0;i < gpcot; i++){
		string str;
		int score;
		cin >> str >> score;
		if(score > 900 && score <= 0) continue;
		if(m.find(str) == m.end()){
			m[str] = (new student(str,score,-1,-1,-1));
		} else{
			m[str]->gp = score;
		}
	}
	for(int i = 0;i < gmcot; i++){
		string str;
		int score;
		cin >> str >> score;
		if(score > 100 && score <= 0) continue;
		if(m.find(str) == m.end()){
			m[str] = (new student(str,-1,score,-1,-1));
		} else{
			m[str]->gmid = score;
		}
	}
	for(int i = 0;i < gfcot; i++){
		string str;
		int score;
		cin >> str >> score;
		if(score > 100 && score <= 0) continue;
		if(m.find(str) == m.end()){
			m[str] = (new student(str,-1,-1,score,-1));
		} else{
			m[str]->gfinal = score;
		}
	}
	
	
	vector<student*> v;
	map<string, student*>::iterator iter;
	iter = m.begin();
	while(iter != m.end()){
		if(iter->second->gmid > iter->second->gfinal){
			iter->second->total = round(iter->second->gmid * 0.4 + iter->second->gfinal * 0.6);
			
		}else{
			iter->second->total = iter->second->gfinal;
		} 
		
		
		if(iter->second->gp >= 200 && iter->second->total >= 60){
			v.push_back(iter->second);
		} 
		
		iter++;
	}
	
	sort(v.begin(),v.end(),cmp);
	
	for(int i = 0; i < v.size(); i++){
		
		// printf("%s %d %d %d %.0f\n",v[i]->ID.c_str(),v[i]->gp,v[i]->gmid,v[i]->gfinal,v[i]->total);
		cout << v[i]->ID << " " << v[i]->gp << " " << v[i]->gmid << " " << v[i]->gfinal << " " << (int)v[i]->total << endl;
	}
	
	return 0;
	
} 

