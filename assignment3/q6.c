/*Write a C program to count the number of digits of a given number. */

#include<stdio.h>

int main(){
    int num,c=0;
    printf("enter no ");
    scanf("%d", &num);
      

        for(int i=1;num!=0;i++)
        {
            num =num/10;
            c=i;
        }

     
     printf("%d",c);
     
     return 0;

}