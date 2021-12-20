#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int queue[100];
int frunt = 0;
int rare = -1;

int  qdelete ()
{
    if(frunt>rare)
    {
        printf("The queue is Empty");
        exit(0);
    }
    else
    {
        return queue[frunt++];
    }
}

void qincert(int x)
{
    if (rare==99)
    {
        printf("queue is full");
    }
    else
    {
        queue[++rare]=x;
    }
}

int count()
{
    int c;
    c = rare-frunt+1;
    return c;
}

int isEmpty()
{
    if(frunt>rare)
    {
        return 1;
    }
    else
        return 0;
}

void display()
{
 if (frunt > rare)
 {
     printf("the queue is empty \n");
 }
 else{
    for( int i = frunt; i<= rare;i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
 }
}

int main()
{

  printf("The queue is ready for your command \n");
  printf("1 for incertion \n2.for deletion \n3.for count \n4. for display \nenter your command : ");
  int cmd;
  scanf("%d",&cmd);
 while(1)
 {
  switch(cmd)
  {
     case 1: { int x;
        scanf("%d",&x);
        qincert(x);
        break;
     }

     case 2: {
         int x = qdelete();
         printf(" %d ",x);
         break;
     }

     case 3: {
         int x = count();
         printf(" %d ",x);
         break;
     }
     case 4: {
         display();
         break;
     }
     default:
     {
        printf("The command is not in the menu please try again\n");
        break;
     }
  }
  }
 return 0;
}
