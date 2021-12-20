#include <stdio.h>
int greater(int e,int f)
{
    if (e<f)
      return f ;
    else
      return e;
}

int  max_of_four(int x,int  y,int  z,int  w)
{
    int ans;
    if (greater(x,y)<greater(z,w))
        { ans = greater(z,w);}
    else {ans = greater(x,y);}
    printf("%d", ans);

}

int main()
{

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);


    max_of_four(a,b,c,d);

    return 0;
}
