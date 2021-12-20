#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
  int data;
  struct node *next;
};

void listTransversal(struct node  *ptr)
{
    while(ptr != NULL)
    {
        printf("%d \n",ptr -> data);
        ptr = ptr -> next;
    }
}

void nodeend ( struct node *temp1 )
{
    int  a;
    printf("enter the value you want to incert : ");
    scanf( " %d \n ",&a);
    struct node *n2e;
    n2e = ( struct node *)malloc( sizeof( struct node ));
    temp1 -> next = n2e;
    n2e -> next = NULL;
    n2e -> data = a;
}

void nodeincertion(struct node *temp1, struct node *temp2)
{
    int a;
    printf("\n enter the data : ");
    scanf("%d",&a);
    struct node *nw;
    nw = (struct node *)malloc(sizeof(struct node));
    temp1 -> next = nw;
    nw  -> next = temp2;
    nw -> data = a;
}

int main()
{
  struct node  *head;
  struct node *second;
  struct node *third;

  head = (struct node *)malloc(sizeof(struct node));
  second = (struct node *)malloc(sizeof(struct node));
  third = (struct node *)malloc(sizeof(struct node));

  head -> data = 7;
  head -> next = second;


  second -> data = 66;
  second -> next = third;


  third -> data = 67;
  third -> next = NULL;
  listTransversal(head);

  nodeincertion( head , second );

  listTransversal(head);

  nodeend ( third );

  listTransversal( head );
  return 0;
}
