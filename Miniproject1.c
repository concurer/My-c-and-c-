#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
void delay(int number_of_seconds)
{
    // Converting time into milliseconds
    int milli_seconds = 1000 * number_of_seconds;

    // Storing start time
    clock_t start_time = clock();

    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}
int main()
{
    int H=0,M=0,S=0;
    printf("Enter Your Time in HH:MM:SS");
    scanf("\n%d%d%d\n",&H,&M,&S);
    start:
    for(H;H<24;H++)
        {
            for(M;M<60;M++)
                {
                    for(S;S<60;S++)
                        {
                            printf("\n\n\n\t\t\t%d:%d:%d",H,M,S);
                            if (H<12){printf(" PM\n");}
                            else {printf(" AM");}
                            delay(1);
                            system("clear");
                        }
                        S=0;
                }
                M=0;
        }
        H=0;
    goto start;
}
