#include<stdio.h>
#include<conio.h>
int main(){
  FILE *fp;
  char ch;
  fp=fopen("D:\\File\\text.txt","r");
  if (fp == NULL)
  {
   printf("The error has took place Retry");
  }
  else
  {
   ch=fgetc(fp);
   while(ch!=EOF)
   {
       printf("%c",ch);
       ch=fgetc(fp);
   }
   fclose(fp);
  }
}
