#include<stdio.h>
#include<conio.h>
int main ()
{
    float sale ,bs , basic=5000 , hra ,da,ts;
    printf("Enter the sales : ");
    scanf("%f",&sale);

    if(sale>=100000)
    {
        hra=15*sale/100;
        da=12*basic/100;
        bs=4*sale/100;
    }
    else
    {
        hra=5*sale/100;
        da=4*basic/100;
        bs=2*sale/100;
    }

    ts=hra+da+bs+basic;
    printf("The Total salary = %f",ts);
}
