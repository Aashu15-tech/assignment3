/*Write a C program to print all even numbers upto a range.*/

#include<stdio.h>

int main(){
    int n;
    printf("print even no upto :");
    scanf("%d", &n);
    // if(n%2==0)
    // {
        for(int i =1;i<=(n/2);i++)
    printf("%d\n",2*i);
    // }

    // else{
    //     for(int i =1;i<=((n-1)/2);i++)
    // printf("%d\n",2*i);}
    //not require if else as i is int so when n/2 pass to i(n is odd) . clearly n/2 is fraction so i store integer value which is even
    return 0;
}