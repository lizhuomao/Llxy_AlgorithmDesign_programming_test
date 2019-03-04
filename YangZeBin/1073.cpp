#include<iostream>
#include<string>
#include<map>
#include<vector>
#include<cstdio>
#include<utility>
#include<algorithm> 
using namespace std;


struct problem{
	int fullscore;
	int allnumber;
	int rightnumber;
	string options;
};

struct maxops{
	int num;
	string op;
};

int cmp(maxops m1, maxops m2){
	if(m1.num == m2.num) return m1.op < m2.op;
	return m1.num < m2.num;
}

void removespace(string s, vector<string>& v){
	string t = "";
	bool kuohao = false;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '(') kuohao = true;
		if(s[i] == ')' && kuohao){
			kuohao = false;
			v.push_back(t);
			t = "";
		} 
		if(kuohao && s[i] >= 'a' && s[i] <= 'z'){
			t += s[i];
		}
	}
}

int main(){
	int N,M;
	cin >> N >> M;
	problem p[M];
	for(int i = 0; i < M; i++){
		int f,a,r;
		string o = "";
		cin >> f >> a >> r;
		for(int j = 0; j < r; j++){
			char c;
			cin >> c;
			o += c;
		}
		p[i].fullscore = f;
		p[i].allnumber = a;
		p[i].rightnumber = r;
		p[i].options = o;
	}
	
//	for(int i = 0; i < M; i++){
//		cout << p[i].fullscore << " " << p[i].allnumber << " " << p[i].rightnumber << " " <<p[i].options << " " << endl;
//	}
	vector<string> v;
	getchar();
	for(int i = 0; i < N; i++){
		
		string s = "";
		getline(cin,s);
		v.push_back(s);
	}
	vector<vector<string> > stuops;
	for(int i = 0; i < v.size(); i++){
		vector<string> t;
		removespace(v[i], t);
		stuops.push_back(t);
	}
	
//	for(int i = 0; i < stuops.size(); i++){
//		for(int j = 0; j < stuops[i].size(); j++){
//			cout << stuops[i][j] << endl;
//		}
//	}
	
	float stuscore[1010] = {0.0,};
	//第几题，哪个选项，多少次 
	map<pair<int,string>, int> m;


	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			if(p[j].options == stuops[i][j]){
				stuscore[i] += p[j].fullscore;
			}else{
				//对于学生选项中的每一个， 如果不在正确答案中，并且获得不了该题的分数，在错题中记录。
				bool parttrue = true;
				for(int k = 0; k < stuops[i][j].size(); k++){
					size_t found = p[j].options.find(stuops[i][j][k]);
					if(found == string::npos){
						parttrue = false;
						string t = "";
						t += stuops[i][j][k];
						pair<int, string> a(j,t);
						map<pair<int,string>, int>::iterator it;
						it = m.find(a);
						if(it == m.end()){
							m[a] = 1;
						}else{
							m[a]++;
						}
					}	
				}
				if(parttrue) stuscore[i] += (p[j].fullscore*0.5);
				
				//对于每个选项，如果没人选，也记录
				for(int k = 0; k < p[j].options.size(); k++){
					size_t found = stuops[i][j].find(p[j].options[k]);
					if(found == string::npos){
						string t = "";
						t += p[j].options[k];
						pair<int, string> a(j,t);
						map<pair<int,string>, int>::iterator it;
						it = m.find(a);
						if(it == m.end()){
							m[a] = 1;
						}else{
							m[a]++;
						}
					}
				} 
			}
			
		}
		
	}
	for(int i = 0; i < N; i++){
		printf("%.1f\n",stuscore[i]);
	} 
	
	int max1 = 0;
	
	if(m.size() == 0){
		printf("Too simple\n");
	}else{
		map<pair<int,string>, int>::iterator it;
		for(it = m.begin(); it != m.end(); it++){
			if(it->second > max1){
				max1 = it->second;
//				cout << it->second << " " << (it->first).first+1 << "-" << (it->first).second <<endl;
			}
		}
	}
	vector<maxops> mo;
	map<pair<int,string>, int>::iterator it;
	for(it = m.begin(); it != m.end(); it++){
		if(it->second == max1){
			maxops moo;
			moo.num = (it->first).first+1;
			moo.op = (it->first).second;
			mo.push_back(moo);
//				cout << it->second << " " << (it->first).first+1 << "-" << (it->first).second <<endl;
		}
	}
	
	sort(mo.begin(),mo.end(),cmp);
	for(int i = 0; i < mo.size(); i++){
		cout << max1 << " " << mo[i].num << "-" << mo[i].op<< endl; 
	}
	return 0;
}
