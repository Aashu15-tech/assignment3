/*Write a C program to print multiplication table of any given number (upto 20).*/

#include<stdio.h>

int main(){
    int table;
    printf("table of ");
    scanf("%d", &table);

    for(int i=1;i<21;i++){
        printf("%d *%d=%d\n",table,i,table*i);
    }
    return 0;
}