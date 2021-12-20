#include<stdio.h>
#include<conio.h>
#define size 10

struct queue
{
  int frunt,rear;
  int value[size];
}q;

int empty()
{
    return((q.frunt == q.rear)?1:0);
}

int qDelete()
{
    int x;
    if(empty() == 1)
    {
        printf("the queue is Empty");
        exit(1);
    }
    else if(q.frunt == (size -1))
    {
       q.frunt = 0;
    }
    else
    {
        (q.frunt)++;
    }
    return q.value[q.frunt];
}

int queincert(int x)
{
  if(q.rear == size -1)
    q.rear = 0;
  else
    (q.rear)++;

  if(q.rear == q.frunt)
  {
      printf("Queue is Full");
      exit(1);
  }
  q.value[q.rear] = x;
}

int main()
{
 q.frunt = q.rear = (size -1);

}
