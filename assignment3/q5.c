/*Write a C program to find out factorial value of a given number.*/


#include<stdio.h>

int main(){
    int fact=1,n;
    printf("factorial of ");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
       fact=fact*i;
    }
    printf("factorial of %d is %d\n",n,fact);
    return 0;
}