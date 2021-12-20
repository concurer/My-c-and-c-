#include<stdio.h>
#include<conio.h>
int main()
{
 char ch,cr,data[200];
 FILE *fx;
 fx=fopen("D:\\file\\text.txt","r");
 if(fx==NULL)
 {
  printf("the error.");
 }
 else
 {
  ch=fgetc(fx);
  while(ch!=EOF)
  {
   printf("%c",ch);
   ch=fgetc(fx);
  }
  fclose(fx);
 }
  /* The code for Appending the data */
 fx=fopen("D:\\file\\text.txt","w");
 if(fx==NULL)
 {
  printf("The file has some error please check and Try again.");
 }
 else
 {
  printf("Start adding the lines to the code ");
  gets(data);
  fprintf(fx,"%s",data);
 }
 fclose(fx);
}




