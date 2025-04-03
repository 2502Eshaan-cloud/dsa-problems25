#include<stdio.h>
#include<stdlib.h>
struct list{
	int data;
	struct list *next;
};
int main()
{
	struct list *start,*a,*temp;
	start=(struct list *)malloc(sizeof(struct list));
	start->data=45;
	start->next=(struct list *)malloc(sizeof(struct list));
	start->next->data=5;
	start->next->next=(struct list *)malloc(sizeof(struct list));
	a=start->next->next;
	a->data=10;
	a->next=(struct list *)malloc(sizeof(struct list));
	a->next->next=NULL;
	a->next->data=15;
	temp=start;
	while(temp->next!=NULL)
	{
         printf("%d %d\n\n",temp->data,temp->next);
         temp=temp->next;
	}
      printf("%d %d\n\n",temp->data,temp->next);
}
