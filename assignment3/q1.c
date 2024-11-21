/*Write a C program to print all natural numbers upto a range.*/
#include<stdio.h>

int main(){
    int n;
    printf("upper limit of range");
    scanf("%d", &n);

    for(int i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}