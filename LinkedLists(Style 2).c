#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

typedef struct node *NODEPTR;

struct node{

  int info;
  struct node *next;

};

NODEPTR getnode(){
 NODEPTR p;
 p = (NODEPTR)malloc(sizeof(struct node));
 return(p);
}

void freenode(NODEPTR p)
{
    free(p);
}

void insert(NODEPTR p ,int x){

 NODEPTR q;
 if(p==NULL){
    printf("VOID INSERTION \n");
    exit(1);
 }
 q = getnode();
 q -> info = x;
 q -> next = p -> next;
 p -> next = q;
/*end of incertion*/
}

void delafter(NODEPTR p, int *px)
{
    NODEPTR q;
    if((p = NULL)||(p -> next == NULL)){
        printf("VOID deletion \n");
        exit(1);
    }
    q = p -> next;
    *px = q -> info;
    p -> next = q -> next;
    freenode(q);
    /*end delafter*/
}

void listTransversal(struct node  *ptr)
{
    while(ptr != NULL)
    {
        printf("%d \n",ptr -> info);
        ptr = ptr -> next;
    }
}


int main(){

NODEPTR h;
insert(h,12);
NODEPTR f;
insert(f,13);
NODEPTR s;
insert(s,14);
NODEPTR t;
insert(t,15);

listTransversal(h);
return 0;
}
