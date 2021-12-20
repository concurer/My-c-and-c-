/*
  name : Aditya Ganesh Battin.
  FIRSTT YEAR BTECH SGGS
  the pointer in hacker rank;
*/

#include <stdio.h>
#include <cstdlib>
void update(int *a,int *b) {
    // Complete this function
    int c;
    c=*pa;
    (*pa)=(*pa)+(*pb);
    (*pb)= abs( c - *pb);
    return *pa *pb;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

