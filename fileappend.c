#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *fx;
  char data[200];
  fx=fopen("D:\\file\\text.txt","w");
 if(fx==NULL)
 {
  printf("The file has some error please check and Try again.");
 }
 else
 {
  printf("\n Start adding the lines to the code : \n");
  gets(data);
  fprintf(fx,"%s",data);
 }
 fclose(fx);
}
