#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char num[1000];
    int a ,i,j,b;
    scanf("%s",num);
    a = strlen(num);
    for(j=0;j<=9;j=j+1)
    {
     for(i=0;i<=a;i=i+1)
     {
        if (j==num[i]){b=b+1;}
        else{b=0;}
     }
     printf("%d ",b);
     b=0;
    }
    return 0;
}

