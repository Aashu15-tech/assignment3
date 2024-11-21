/*Write a C program to convert a decimal number to its binary equivalent.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int temp, dl_num, bl_num = 0, nd;
    printf("enter no ");
    scanf("%d", &dl_num);
    temp = dl_num;
    for (int i = 0; dl_num != 0; i++)
    {
        int rem = dl_num % 2;

        dl_num = dl_num / 2;
        bl_num = pow(10, i) * rem + bl_num;
    }
    dl_num = temp;
    printf("%d is binary eq of %d decimal no", bl_num, dl_num);
    return 0;
}