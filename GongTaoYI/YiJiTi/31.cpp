#include<stdio.h>
#include<stdlib.h>
int b[17] = {7, 9, 10, 5, 8, 4, 2, 1, 6, 3, 7, 9, 10, 5, 8, 4, 2};
char c[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};
typedef struct stu1
{
	char a[19];
	struct stu1 * next;
}stu, * Pstu;
Pstu creat_list();
void judge(Pstu head);
int main()
{
	Pstu head;
	head = creat_list();
	judge(head);
	return 0;
}
Pstu creat_list()
{
	int n, i;
	Pstu p1, p2;
	Pstu head;
	head = (Pstu)malloc(sizeof(stu));
	if(NULL == head)
	{
		printf("Пе");
		exit(1);
	}
	p1 = head;
	p1->next = NULL;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		p2 = (Pstu)malloc(sizeof(stu));
		if(NULL == head)
		{
			printf("Пе");
			exit(1);
		}
		scanf("%s", p2->a);
		p1->next=p2;
		p2->next=NULL;
		p1=p2;
	}
	return head;
}
void judge(Pstu head)
{
	int n=0, m=0, i;
	int x=0, y=0, z=0;
	Pstu p3 = head->next;
	while(p3!=NULL)
	{
		for(i=0; i<17; i++)
		{
			if(p3->a[i]<'0' && p3->a[i]>'9')
			{
				z++;
				x++;
				break;
			}
		}		
		if(z!=0)
		{
			z=0;
			printf("%s\n", p3->a);
			p3 = p3->next;
			continue;
		}
		for(i=0; i<17; i++)
		{
			m=m+(p3->a[i]-'0')*b[i];
		}
		
		m = m%11;
		if(p3->a[17]!=c[m])
		{
			x++;
			printf("%s\n", p3->a);
		}
		z=0;
		m=0;		
		p3 = p3->next;
	}
	if(x == 0)
	{
		printf("All passed");
	}
	return;
}