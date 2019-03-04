#include<iostream>
#include <algorithm>
#include<string>
#include<map>
#include<vector>
using namespace std;

struct student{
	string company;
	int Tscore;
	int Ascore;
	int Bscore;
	int totalscore;
	int cot;
};
int cmp(student* a, student* b){
	if(a->totalscore == b->totalscore){
		if(a->cot == b->cot){
			return a->company < b->company;
		}else{
			return a->cot < b->cot;
		}
	}
	return a->totalscore > b->totalscore;
	
}

int main(){
	int n;
	cin >> n;
	map<string,student*> m;
	
	for(int i =0; i < n; i++){
		string ID;
		int score;
		string com;
		cin >> ID >> score >> com;
//		mytolower(com);
		std::transform(com.begin(), com.end(), com.begin(), ::tolower);
//		cout << com << ID << score; 
		student* s;
		int flag = 0;
		map<string,student*>::iterator it;
		it = m.find(com);
		if(it != m.end()){
			s = m[com];
		}
		else{

			s = new student;
			s->company.append(com.c_str());
			s->totalscore = 0;
			s->Ascore = 0;
			s->Bscore = 0;
			s->Tscore = 0;
			flag = 1;
			s->cot = 0;
//			cout << s->Ascore; 
		}

		if(ID[0] == 'T'){
			s->cot++;
			s->Tscore += score;
		}else if(ID[0] == 'A'){
			s->cot++;
			s->Ascore += score;
		}else if(ID[0] == 'B'){
			s->cot++;
			s->Bscore += score;
		}
		
		if(flag){
			m.insert(std::pair<string,student*> (com, s));
//			m[com] = s;
		} 
		
//		cout << m[com].company << " " << m[com].Ascore <<endl;
	}
	
	vector<student*> v;
	map<string,student*>::iterator iter;
    iter = m.begin();
    while(iter != m.end()) {
    	
    	iter->second->totalscore = (double)iter->second->Bscore/1.5 + iter->second->Ascore + (double)iter->second->Tscore*1.5; 
//        cout << iter->first << " : " << iter->second->company << " " <<iter->second->totalscore <<  " "<< iter->second->cot << endl;
        v.push_back(iter->second);
		iter++;
    }
    
    sort(v.begin(),v.end(),cmp);
    int len = v.size();
    cout << len << endl;
    int realkase = 1;
	cout << realkase << " " << v[0]->company << " " <<v[0]->totalscore <<  " "<< v[0]->cot << endl;
    int ff = v[0]->totalscore;
	for(int i = 1; i < len; i++){
		if(ff != v[i]->totalscore){
			realkase += i-realkase+1;
			ff = v[i]->totalscore;
		}
    	cout << realkase << " " << v[i]->company << " " <<v[i]->totalscore <<  " "<< v[i]->cot << endl;
	}
	return 0;
	
}
