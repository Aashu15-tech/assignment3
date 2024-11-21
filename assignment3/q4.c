/*Write a C program to find and print the square of each even numbers upto a range.*/

#include<stdio.h>

int main(){
    int n;
    printf("upper limit of range");
    scanf("%d", &n);
  int a=n/2;
    for(int i=2;i<=a*2;i=i+2)
    {
       int s=i*i;
       printf("square of %d is %d \n",i ,s);
    }
    return 0;
}