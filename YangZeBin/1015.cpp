#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct student{
	int ID;
	int character;
	int talent;
	int totalscore;
	int type;
};

int cmp(student *a, student *b){
	if(a->type == b->type){
		if(a->totalscore == b->totalscore){
			if(a->character == b->character){
				return a->ID < b->ID;
			}
			return a->character > b->character;
		}
		return a->totalscore > b->totalscore;
	}
	return a->type > b->type;
}

int main(){
	int n, lowerscore, highscore;
	scanf("%d%d%d",&n,&lowerscore,&highscore);
	
	vector<student*> v;
	for(int i = 0;i < n; i++){
		student *s = new student;
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		s->ID = a; 
		s->character = b;
		s->talent = c;
		s->totalscore = b + c;
		
		if(s->character < lowerscore || s->talent < lowerscore){
    		s->type = 1;
		}else if(s->character >= highscore &&s->talent >= highscore){
			//德才都大于highscore s[i].character > s[i].talent && 
			s->type = 5;
		}else if(s->talent < highscore && s->character >= highscore){
			//德到才没到 
			s->type = 4;
		}else if(s->talent < highscore && s->character < highscore && s->character >= s->talent){
			//德才都没到， 但德大于才
			s->type = 3;
		}else if(s->talent >= lowerscore && s->character >= lowerscore){
			s->type = 2;
		}
		if(s->type != 1){
			v.push_back(s);
		}
		
	}
	sort(v.begin(),v.end(),cmp);
	printf("%d\n",v.size());
	for(int i = 0; i < v.size(); i++){
		printf("%08d %d %d\n",v[i]->ID,v[i]->character,v[i]->talent);
	}
	
} 
