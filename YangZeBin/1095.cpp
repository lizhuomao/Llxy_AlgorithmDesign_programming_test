//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>

#include <bits/stdc++.h>
using namespace std;

struct stuinfo{
	string all;
	char level;
	int examroom;
	int date;
	string ID;
	int score;
};

struct roomac{
	int examroom;
	int cot;
	roomac(int r,int s):examroom(r),cot(s){}
};

int cmp(stuinfo & a, stuinfo & b){
	if(a.score == b.score) return a.all < b.all;
	return a.score > b.score;
}
int cmp1(roomac & a, roomac & b){
	if(a.cot == b.cot) return a.examroom < b.examroom;
	return a.cot > b.cot;
}


int a[1000];
int num[1000];

int main(){
	int infonum, selectnum;
	scanf("%d%d",&infonum,&selectnum);
	stuinfo stu[infonum];
	//按级别存储学生。 
	string s;
	vector<stuinfo> level[3];
	for(int i = 0; i < infonum; i++){
		cin >> s >> stu[i].score;
		stu[i].all = s;
		stu[i].level = s[0];
		stu[i].examroom = atoi(s.substr(1,3).c_str());
		stu[i].date = atoi(s.substr(4,6).c_str());
		stu[i].ID = s.substr(10,3);
		if(stu[i].level == 'T'){
			level[0].push_back(stu[i]);
		}else if(stu[i].level == 'A'){
			level[1].push_back(stu[i]);
		}else if(stu[i].level == 'B'){
			level[2].push_back(stu[i]);
		}
		
		a[stu[i].examroom]+=stu[i].score;  //使用数组a和数组num,直接存入指令2所需要的数据
		num[stu[i].examroom]++;
	}
	sort(level[0].begin(),level[0].end(),cmp);
	sort(level[1].begin(),level[1].end(),cmp);
	sort(level[2].begin(),level[2].end(),cmp);
	
	int kase = 0;
	int zl,room,j,data;
	char rank;
	int i;
	for(i = 0; i < selectnum; i++){
		scanf("%d",&zl);
		
//		printf("Case %d: %d %s\n",++kase,number,type.c_str());
			//处理类型：按级别     按分数非升序输出某个指定级别的考生的成绩
			if(zl == 1){
				cin >> rank;
				printf("Case %d: %d %c\n",++kase,zl,rank);
				if(rank ==  'T'){
					if(level[0].empty()){
						printf("NA\n");
						continue;
					} 
					
					for(int i = 0; i < level[0].size(); i++){
						printf("%s %d\n",level[0][i].all.c_str(),level[0][i].score);
					}
				} else if(rank == 'A'){
					if(level[1].empty()){
						printf("NA\n");
						continue;
					} 
					
					
					for(int i = 0; i < level[1].size(); i++){
						printf("%s %d\n",level[1][i].all.c_str(),level[1][i].score);
					}
				}else if(rank == 'B'){
					if(level[2].empty()){
						printf("NA\n");
						continue;
					} 
					
					for(int i = 0; i < level[2].size(); i++){
						printf("%s %d\n",level[2][i].all.c_str(),level[2][i].score);
					}
				}
			}else 
			//处理类型：按考场编号    将某指定考场的考生人数和总分统计输出 
			if(zl == 2){
				scanf("%d",&room);
				printf("Case %d: %d %03d\n",++kase,zl,room);
				if(num[room]==0){printf("NA\n");continue;}
				printf("%d %d\n",num[room],a[room]);

				
			}else 
			//处理类型：按日期   将某指定日期的考生人数分考场统计输出
			if(zl == 3){
				map<int,int> mp;
				vector<roomac> vm;
				scanf("%d",&data);
				printf("Case %d: %d %06d\n",++kase,zl,data);
				int flag=1;
				for(j=0;j<infonum;j++){
					if(stu[j].date==data){
						flag=0;
						mp[stu[j].examroom]++;
					}
				}
				if(flag) {printf("NA\n");continue;}
				for(auto i:mp)
					vm.push_back(roomac(i.first,i.second));
				sort(vm.begin(),vm.end(),cmp1);
				for(j=0;j<vm.size();j++){
					printf("%d %d\n",vm[j].examroom,vm[j].cot);
				}
			}
		
	}
	
	
	return 0;
}
