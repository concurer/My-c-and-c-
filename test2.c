#include <stdio.h>
int main()
{
int count, t, limit;
float temp, error, a, sum = 0;
float matrix[10][10], y[10], allowed_error;
printf("\nEnter the Total Number of Equations:\t");
scanf("%d", & limit);
// maximum error limit till which errors are considered,
// or desired accuracy is obtained)
printf("Enter Allowed Error:\t");
scanf("%f", & allowed_error);
printf("\nEnter the Co-Efficients\n");
for(int count = 1; count < = limit; count++)
{
  for(t = 1; t < = limit + 1; t++)
  {
     printf(" Matrix[%d][%d] = " , count, t);
     scanf(" %f" , & matrix[count][t]);
   }
}

   for(count = 1; count < = limit; count++)
   {
     y[count] = 0;
   }
do
 {
   a = 0;
  for(count = 1; count < = limit; count++)
  {
    sum = 0;
    for(t = 1; t a)
    {
     a = error;
    }
    y[count] = temp;
    printf("\nY[%d]=\t%f", count, y[count]);
  }
    printf("\n");
  }
  while(a > = allowed_error);
    printf("\n\nSolution\n\n");
for(count = 1; count < = limit; count++)
{
 printf(" \nY[%d]:\t%f" , count, y[count]);
}
return 0;
}

