/*Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers.*/

#include<stdio.h>

int main(){
    int lowlt,uplt,sum=0,temp=0;
    printf("enter lower limit :");
    scanf("%d", &lowlt);
    printf("enter upper limit :");
    scanf("%d", &uplt);

      for(int i=0;lowlt+i<=uplt;i++)
      {  
          if((lowlt+i)%17!=0)
          {
            sum=sum+lowlt+i;

          }
         
      }
      printf("%d",sum);
    return 0;
}