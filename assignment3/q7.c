/*Write a C program to reverse a given number. */

#include<stdio.h>

int main(){
    int num,reversed=0;
    printf("enter num ");
    scanf("%d", &num);
    for (int i = 0; num!=0; i++)
    {   
        int remainder=num%10;
        reversed=reversed*10+remainder;
        num=num/10;
    }
    printf("reversed is %d",reversed);
    
    return 0;   
}