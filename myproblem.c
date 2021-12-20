#include<stdio.h>
#include<conio.h>
#include<string.h>

int main ()
{
char i[1000];
int len = strlen(i),k;
scanf("%s",&i);
for(k=0;k<len;k++)
    {
    i[k]=i[len-k];
    printf("%s",i[k]);
    printf("\nOLX");
    }
printf("%s",i);

}
