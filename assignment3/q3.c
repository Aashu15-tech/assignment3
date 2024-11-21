/*Write a C program to calculate the sum of all natural numbers upto a range.*/

#include <stdio.h>

int main()
{
    int n,sum=0;
    printf("upper limit of range");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("sum upto %d is %d",n,sum);

    return 0;
}