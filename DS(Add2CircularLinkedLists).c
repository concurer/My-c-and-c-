#include<stdio.h>
#include<conio.h>
typedef struct node *NODEPTR;


struct node {
  long int info;
  struct node *next;
};

int empty(NODEPTR *pstack)
{
 return((*pstack == NULL)?true:false)
}

void push(NODEPTR *pstack,int x)
{
    NODEPTR p;
    p = getnode();
    p->info = x;
    if(empty(pstack)== true)
        *pstack = p;
    else
       p->next = (*pstack) -> next;
    (*pstack)-> next = p;
}

int pop(NODEPTR *pstack)
{
  int x
  NODEPTR p;
  if(empty(pstack) == true)
  {
      printf("Stack Overflow\n");
      exit(1);
  }
  else
  {
      (*pstack) -> next = p ->next;
      freenode(p)
      return(x);
  }
}

void listTransversal(NODEPTR *ptr)
{
    while(ptr != NULL)
    {
        printf("%d \n",ptr -> data);
        ptr = ptr -> next;
    }
}
//large number are 10^18 addition........

NODEPTR addint(NODEPTR p, NODERPTR q)
{
    long int hunthou = 100000L;
    long int carry,numder,total;
    NODERPTR s;
    p = p ->next;
    q = q ->next;

    s = getnode();
    s->info = -1;
    s->next = s;
    carry = 0;
    while( p->info != -1 && q-> info != -1)
    {
        total = p -> info + carry;
        number = total % huntou;
        inafter(s,number);

        s = s->next;
        p = p->next;
        q = q->next;

        carry = total / hunthou;
    }
    while(p->info != -1)
    {
        total = p-> info + carry;
        number = total % hunthou;
        insafter(s,number);

        s = s ->next;
        p = p ->next;

    }

    while(q ->info != -1)
    {
        total = q ->info + carry;
        number = total % hunthou;
        insafter(s,number);

        carry = total / hunthou;
        s = s ->next;
        q = q ->next;

    }

    if(carry == 1)
    {
        insafter(s,carry);
        s = s->next;

    }

    return(s ->next);
}

int main()
{






}
