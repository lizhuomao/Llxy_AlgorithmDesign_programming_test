#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	char a[11];
	char b[11];
	int c;
	struct student * next; 
}stu, *Pstu;

Pstu create(int n);
void judge(Pstu head);

int main()
{
	int n;
	scanf("%d", &n);
	Pstu head =  create(n);
	judge(head);	
	return 0;
}
Pstu create(int n)
{
	int i;
	Pstu head = (Pstu)malloc(sizeof(stu));
	if(head == NULL)
	{
		printf("·ÖÅäÊ§°Ü£¡"); 
	}
	Pstu p1 = head;
	head->next = p1;
	for(i=0; i<n; i++)
	{
		Pstu p2 = (Pstu)malloc(sizeof(stu));
		if(p2 == NULL)
		{
			printf("·ÖÅäÊ§°Ü£¡"); 
		}
		scanf("%s %s %d", p2->a, p2->b, &p2->c);
		p1->next = p2;
		p2->next = NULL;
		p1 = p2;
	}
	return head;
}
void judge(Pstu head)
{
	Pstu p1 = head->next;
	int min=0, max=0;
	if(p1 != NULL)
	{
		min = p1->c;
		max = p1->c;
		p1 = p1->next;
	}
	while(p1 != NULL)
	{ 
		if(p1->c > max)
		{
			max = p1->c;
		}
		if(p1->c < min)
		{
			min = p1->c;
		}
		p1 = p1->next;
	}
	Pstu p2 = head->next;
	while(p2 != NULL)
	{
		if(p2->c == max)
		{
			printf("%s %s\n", p2->a, p2->b);
		}
		p2 = p2->next;
	}
	Pstu p3 = head->next;
	while(p3 != NULL)
	{
		if(p3->c == min)
		{
			printf("%s %s", p3->a, p3->b);
		}
		p3 = p3->next;
	}
	
}