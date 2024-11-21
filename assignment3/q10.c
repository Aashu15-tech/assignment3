/*Write a C program to check whether a given number is Armstrong number or not*/

// by recursion

// #include <stdio.h>
// #include <math.h>
// int armstrongno(int num, int no_of_digit)
// {
//     int remainder = num % 10;
//     if (num == 0)
//     {
//         return 0;
//     }

//     return pow(remainder, no_of_digit) + armstrongno(num / 10, no_of_digit);
// }

// int main()
// {
//     int num, sum, orignal, no_of_digit;

//     printf("enter no. ");
//     scanf("%d", &num);
//     orignal = num;
//     for (int i = 1; num != 0; i++)
//     {
//         num = num / 10;
//         no_of_digit = i;
//     }
//     num=orignal;
// printf("%d",no_of_digit);
// printf("%d",armstrongno(num, no_of_digit));
//     sum = armstrongno(num, no_of_digit);
//     if (orignal == sum)
//         printf("arm");

//     return 0;
// }

// by loop

#include<stdio.h>
#include<math.h>
int main(){
    int num,orignal,armstrongsum=0,count;
       printf("enter no ");
    scanf("%d", &num);       //getting no
orignal =num;
    for(int i=1;num!=0;i++){
        num=num/10;
        count=i;     //no of digit in num
    }
    num=orignal;      //after completion loop num value get changed
    for(int i =0;num!=0;i++)
    {
        int remainder=num%10;
        num=num/10;
           armstrongsum=armstrongsum+pow(remainder,count);
    }

    if(armstrongsum==orignal){
        printf("armstrong number");

    }
    else
    printf("not armstrong number");
return 0;
}

// by fn

// #include <stdio.h>
// #include <math.h>
// int count(int num)
// {
//     int i,orignal,ct;
//     orignal=num;
//     for (i = 1; num != 0; i++)
//     {
//         num = (num/10);
//         ct =i;
//     }
//     num=orignal;
//     return ct;   ////learning:--from each cycle of for loop at end i increasement done
// }

// void armstrong(int num)
// {
//     int count_num = count(num);
//     //      printf("%dcount",count_num);       //for finding error
//     int orignal = num;
//     int sum = 0;
//     // printf("%d orignal",orignal);        //for finding error
//     while (num != 0)
//     {
//         int remainder = num % 10;
//         num=num/10;
//         sum = pow(remainder, count_num) + sum;
//     }
//   //  printf("%dsum",sum);            //for finding error
//     if (orignal == sum)
//     {
//         printf("armstrong");
//     }
//     else
//     {
//         printf("not armstrong");
//     }
//     return;
// }
// int main()
// {
//     int num;
//     printf("enter no ");
//     scanf("%d", &num);
//     armstrong(num);

//     return 0;
// }
