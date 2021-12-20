#include <stdio.h>
#include <stdlib.h>

void reverse_arr(int arr[],int num)
{
 int start = 0 ,end = num - 1;
    while ( start <  end)
    {
        int temp ;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start += 1;
        end -= 1;
    }
    return arr;
}
int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
    {scanf("%d", arr + i);}

    reverse_arr(arr,num);

    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
