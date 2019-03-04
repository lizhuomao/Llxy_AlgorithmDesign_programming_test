#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;  

typedef struct LNode{
	ElemType data;
	struct LNode *next; 
}LNode, *LinkList;

//��ʼ����
int InitList(LinkList *L){
	*L = (LinkList)malloc(sizeof(struct LNode));
	
	if(!*L) return 0;
	//ָ����Ϊ�� 
	(*L)->next = NULL;
} 
//�������ٱ� 
void DestroyList(LinkList *L){
	LinkList q;
	while(*L){
		q = (*L)->next;
		free(*L);
		*L = q;
	}
} 
//��ʼ��Ϊ�ձ�״̬ 
void ClearList(LinkList L){
	LinkList p,q;
	p = L->next;
	while(p){
		q = p->next;
		free(p);
		p = q;
	}
	L->next = NULL;
}
//�ж��Ƿ�Ϊ�ձ� 
int ListEmpty(LinkList L){
	return L->next == NULL;
} 
//��������ĳ��ȣ�����ͷ��㣩 
int ListLength(LinkList L){
	int length = 0;
	LinkList p = L->next;
	while(p){
		length++;
		p = p->next;
	}
	return length;
}
//�������еõ���i��λ�õ����� 
int GetElem(LinkList L,int i,ElemType *e){
	int j = 1;
	LinkList p = L->next;
	while(p && j<i){
		p = p->next;
		j++;
	}
	if(!p || j > i) return -1;
	*e = p->data;
	return 0;
	
}
//�����������������ڵ�λ�� 
int LocateElem(LinkList L, ElemType e){
	int i = 0;
	LinkList p = L->next;
	while(p){
		i++;
		if(p->data == e){
			return i;
		}
		p = p->next;
	}
	return 0;
}
//ȡ�������н�����ݵ���һ��������� 
int PriorElem(LinkList L, ElemType cur_e, ElemType *pre_e){
	LinkList q, p = L->next;
	while(p->next){
		q = p->next;
		if(q->data == cur_e){
			*pre_e = p->data;
			return 1;
		}
		p = q;
	}
	return 0;
}
// //ȡ�������н�����ݵ���һ��������� 
int NextElem(LinkList L, ElemType cur_e, ElemType *next_e){
	LinkList p = L->next;
	while(p->next){
		if(p->data == cur_e){
			*next_e = p->next->data;
			return 1;	
		}
		p = p->next;
	}
	return 0;
}
//����һ����� 
int ListInsert(LinkList L, int i, ElemType e){
	int j = 0;
	LinkList p = L, s;
	while(p && j < i-1){
		p = p->next;
		j++;
	}
	if(!p || j > i-1){
		return -1;
	}
	s = (LinkList)malloc(sizeof(struct LNode));
	s->data = e;
	s->next = p->next;
	p->next = s;
	return 1;
}

int ListInsertAtLast(LinkList L, ElemType e){
	int j = 0;
	LinkList p = L, s;
	while(p->next != NULL){
		p = p->next;
	}
	s = (LinkList)malloc(sizeof(struct LNode));
	s->data = e;
	s->next = NULL;
	p->next = s;
	return 1;
}

 
void PrintList(LinkList *L){
	LinkList p,q;
	int nox = 1;
	p = (*L)->next;
	if(!p){
		printf("this linklist is empty!");
		return 0;
	}
	while(p){
		printf("%d  %d\n",nox++,p->data);
		p = p->next;
	}
	
}



int main(){
	int count[100000] = {0}; 
	int incompatibleElementcCount,cargoCount;
	scanf("%d%d",&incompatibleElementcCount,&cargoCount);
	int IE[incompatibleElementcCount][2];
	int i = 0, j = 0, q = 0, k = 0, flag = 0;
	
	for(i = 0; i < incompatibleElementcCount; i++){
		scanf("%d%d",&IE[i][0],&IE[i][1]);
		
	}
	
	
	for(i = 0; i < cargoCount; i++){
		int number, flag = 0;;
		
		scanf("%d",&number);
		int data[number];
		for(j = 0; j < number; j++){
			scanf("%d",&data[j]);
			count[data[j]] = 1;
		}
		
		for(k = 0; k < incompatibleElementcCount; k++){
			if(count[IE[k][0]] == 1  && count[IE[k][1]] == 1){
			 	printf("No\n");
			 	flag = 1;
			 	break;
			}
		}
		if(!flag){
			printf("Yes\n");
		}
		
		memset(count,0,sizeof(count));
		
	}
	
	;
	
	
	return 0;
}
