/*Write a C program to check whether a given number is Palindrome or not. */

#include<stdio.h>

int main(){
    int num , orignal,reversed=0;
    printf("enter no ");
    scanf("%d", &num);

    orignal=num;
    for(int i=1;num!=0;i++)
    {
        int remainder;
        remainder=num%10;
        reversed=reversed*10+remainder;
        num/=10;
    }
   if(reversed==orignal){
    printf("palindrome");
    
   }
    else
    printf ("not palindrome");
    return 0;
}