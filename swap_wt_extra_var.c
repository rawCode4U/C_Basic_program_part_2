// 4. Write a program to swap the values of variable with third variable without third variable.

#include <stdio.h>

int swap(int num1, int num2){
    int temp;
    num2 = num1 + num2;
    num1 = (num2 - num1) ;
    num2 = num2 - num1;
    printf("Number 1 : %d \n",num1);
    printf("Number 2 : %d \n", num2);
    return num1,num2;
}

int main()
{
    int num1 , num2 ;
    printf("Enter your number two numbers \n");
    scanf("%d%d", &num1 , &num2);
    printf("Number 1 : %d \n",num1);
    printf("Nmber 2 : %d \n", num2);
    printf("************** After Swapping *******************\n");
    swap(num1,num2);
    return 0;
}