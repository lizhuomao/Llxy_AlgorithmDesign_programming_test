#include<stdio.h>
#include<stdlib.h>
typedef struct exam
{
	char a[15];
	int seat_number1;
	int seat_number2;
	struct exam * next; 
} examinee, *Pexaminee;
void judge(Pexaminee head);
Pexaminee creat_list();
int main()
{
	Pexaminee head;
	head = creat_list();
	judge(head);
	return 0;
}
Pexaminee creat_list()
{
	int i;
	int n;
	Pexaminee p1, p2, head;
	head = (Pexaminee)malloc(sizeof(examinee));
	if(head == NULL)
	{
		printf("Пе"); 
	}
	p1 = head;
	p1->next = NULL;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		p2 = (Pexaminee)malloc(sizeof(examinee));
		if(p2 == NULL)
		{
			printf("Пе"); 
		}
		scanf("%s%d%d", p2->a, &p2->seat_number1, &p2->seat_number2);
		p1->next = p2;
		p2->next = NULL;
		p1 = p2;
	}
	return head;
}
void judge(Pexaminee head)
{
	Pexaminee p1;
	int m, x=0;
	int i;
	int a[1000];
	p1 = head->next;
	scanf("%d", &m); 
	for(i=0; i<m; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0; i<m; i++)
	{
		while(p1 != NULL)
		{
			if(p1->seat_number1 == a[i])
			{
				x++;
			}
			if(x!=0)
			{
				printf("%s %d\n", p1->a, p1->seat_number2);
				x=0;
				p1 = head->next;
				break;
			}
			p1 = p1->next;
		}
	}
}