#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char name[20],surname[20],name2[20],name3[20];
    printf("Enter two strings for name : ");
    scanf("%s",&name);
    printf("surname : ");
    scanf("%s",&surname);

    strcpy(name2,name);
    printf("%s",name2);


    printf("/n%s",strrev(name2));





}

