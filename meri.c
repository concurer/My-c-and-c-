#include<stdio.h>
int main()
{
    struct abc
    {
        int a;
        float b;

    };
    struct abc x={10,20.2};
    printf("%d %2.2f",x.a,x.b);
    return 0;

    union abd
    {
        int d;
        float c;
    }y;

    printf("")
}
