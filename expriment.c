#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_end(int n, int a, int b, int c,int ans,int* ar) {
  //Write your code here.

  if (n==1){ ans=a;}
  if (n==2){ ans=b;}
  if (n==3){ ans=c;}
  else {ans=(find_end(n)+find_end(n-1)+find_end(n-2));}
}

int main() {
    int n, a, b, c;

    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_end(n, a, b, c);

    printf("%d", ans);
    return 0;
}


