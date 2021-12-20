#include<stdio.h>
#include<conio.h>
int main ()
{
    /* here we have
     while loop
     do while
     for loop */

    /*
     while (condition)
      {
       statements:
      }
      if condition is true then only the statements will exicuted
    ***********************
      do {
        statements:
      }
      while(conditions)
        it exicutes even if condition is false.
    ***********************
      for( initialization ;(condition) ;i++/i--){
        statements;
      }
      if condition is true then only the statements will exicuted
    */
    //Examples............
    //[1] print table of 2 by using while loop.
    int num = 1;
    while(num <= 10)
    {
        printf("\n %d \n",2*num);
        num=num+1;
    }
    printf("***********************************************");

}






