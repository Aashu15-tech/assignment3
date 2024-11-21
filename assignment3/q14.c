/*Write a C program to convert a decimal number to its hexadecimal equivalent.*/

#include<stdio.h>
#include<math.h>

int main(){
    int dl_num,hx_num=0,orig;

    printf("enter no ");
    scanf("%d", &dl_num);

    for(int i=0;dl_num!=0;i++)
    {
        int rem=dl_num%16;
        dl_num=dl_num/16;
        hx_num=rem*pow(10,i)+hx_num;
    }

    printf("%d is hexadecimal number",hx_num);
     return 0;
}