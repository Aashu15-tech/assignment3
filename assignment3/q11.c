/*Write a C program to check whether a given number is Prime number or not.*/

#include<stdio.h>

int main(){
    int num,orignal,fact;
    printf("enter no :");
    scanf("%d", &num);
     if(num<=1)printf("not prime");
     else
    {
        for(int i=2;i<num/2;i++)
        {
            if(num%i==0){
                fact = i;
                break;
            }
            else
            fact=1;
        }
    }
    if(fact==1)
                printf("prime");
                else
            printf("not prime");
    return 0;
}