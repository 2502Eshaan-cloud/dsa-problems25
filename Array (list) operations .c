#include<stdio.h>
#include<stdlib.h>
int i,*a,*r;
void enter();
int menu();
void display();
int main()
{
    printf("Enter size :- ");
	scanf("%d",&i);
	enter();
	while(1)
	{
     menu();
    }
	return 0;
}
void enter()
{
	a=(int *)malloc(i*sizeof(int));
	int b;
	for(b=0;b<i;b++)
    {
    	printf("Element no %d:",b+1);
    	scanf("%d",a+b);
	}
}
int menu()
{
	int b,c,d,x,z;
	printf("\nMenu\n1.Insert\n2.Delete\n3.Search\n4.Display\n5.Exit\n");
    scanf("%d",&b);
   	switch(b)
    {
   	 case 1:printf("Enter the position where you want to insert:");scanf("%d",&c);
   	 d=i;
   	 a=(int *)realloc(a,(++i)*sizeof(int));
   	 x=i;
   	 if(c>0)
   	 { 	
	  for(;d>=(c-1);d--)
	  {
	 	*(a+x)=*(a+d);
	 	x--;
	  }	
	  printf("Enter element at %d :",c);
	  c--;
	  scanf("%d",a+c);
     }
	  break;
	  case 2:printf("Enter the position of the element you want to delete:- ");
	  scanf("%d",&c);
	  c--;
	  if(c<0)
	  return;
	  for(;c<(i-1);c++)
	  {
	  	x=c+1;
	  	*(a+c)=*(a+x);
	  }
	  a=(int *)realloc(a,(--i)*sizeof(int));
	  break;
	  case 3:printf("Enter the element you want to search:- ");scanf("%d",&c);z=0;
	  for(x=0;x<i;x++)
	  {
	  	if(*(a+x)==c)
	  	{
	  	  printf("Element found at index no . %d ",x);
		 z=1;	
	    }
	  }
	  if(z==0)
	  {
	  	printf("Element not found");
	  }
	  printf("\n");
	  break;
	  case 4:display();break;
	  case 5:exit(0);
	  default:return 1;
    }
}
void display()
{
	int c;
	for(c=0;c<i;c++)
	{
		printf("%d ",*(a+c));
	}
	printf("\n\n");
}

