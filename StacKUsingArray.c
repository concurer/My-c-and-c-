#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int stack[100];
int top = -1;
//global declaration........
void push(int x)
{
    if(top!=99)//7 is the size of array
    {
        top++;
        stack[top] = x;
    }
}

int pop()
{
    int temp=1000;
    if(top!=-1)
    {
     temp = stack[top--];
    }
    else
    {
        printf("Stack is empty \n");
        exit(0);
    }
    return temp;
}

int peek()//to check the top data elements
{
    return stack[top];
}

int  isEmpty()
{
    if(top==-1)
        {return 1;}
    else
        {return 0;}
}

int isFull()
{
    if(top==99)
        {return 1;}
    else
        {return 0;}
}

void display()
{
  if (top==-1)
  {
      printf("Stack is empty");
  }
  else
  {
      for(int i=0;i<=top;i++)
      {
          printf("%d ",stack[i]);
      }
      printf("\n");
  }
}

int main()
{

  printf("The Stack is Here waiting for your command\n");
  printf(" the choice \n 1. Enter 1 to push(); \n 2. Enter 2 to pop(); \n 3. Enter 3 to display stack \n 4. Enter 4 to find top element \n ");

  while(1)
  {
    int cmd;
    printf("Enter your command : ");
    scanf("%d",&cmd);

    switch(cmd)
    {
      case 1:
      {
        int x;
        printf("enter value you want to append : ");
        scanf("%d",&x);
        push(x);
        break;
      }
      case 2:
      {
          int x;
          x = pop();
          printf("%d",x);
          break;
      }
      case 3:
      {
          display();
          break;
      }
      case 4:
      {
          int x = peek();
          printf("%d\n",x);
          break;
      }
      default :
        {
            printf("The operation is not valid........");
            break;
        }

    }
  }



 return 0;
}
