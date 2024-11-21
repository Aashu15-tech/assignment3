/*Write a C program toprint the Fibonacci series upto a range*/

#include<stdio.h>
int main(){
    int a=1,b=1,sum=1,range;
    printf("enter range ");
    scanf("%d", &range);
printf("%d\n",a);
printf("%d\n",b);
    for(int i=3;i<=range;i++){
        a=b;
        b=sum;
        sum=a+b;
        printf("%d\n",sum);

    }
    return 0;
}