#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
  char ch ;
  char s[30],sen[100];
  scanf("%c",&ch);
  scanf("%s\n",s);
  scanf("%s[^\n]s",sen);
  printf("%c\n%s",ch , s);
  printf("\n%s",sen);
  return 0;
}
