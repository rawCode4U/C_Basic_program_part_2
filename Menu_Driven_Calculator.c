// 1. Write a Menu Driven Calculator program that will perform following operations
// -Sum -Substraction -Division Multiplication -Mod

 int sum(int num1 , int num2){
   return num1 +num2;
 }

 int sub(int num1 , int num2){
     return num1 - num2;
 }

 int mul(int num1 , int num2){
     return num1 * num2;
 }

 int div(int num1 , int num2){
     return num1 / num2;
 }

 int mod(int num1 , int num2){
     return num1 % num2;
 }

#include<stdio.h>
int main(){
    int num1, num2, opt;
    printf("\n************** Welcome to Abhi's Calculator **********************\n");
    printf("Choose what you want to perform\n");
    printf(" For Addition ---> Press 1\n For Substraction ---> Press 2\n For Multifiaction ---> Press 3\n For Division ---> Press 4\n For Modulus ---> Press 5\n");
    scanf("%d", &opt);
    printf("Enter First Number : ");
    scanf("%d", &num1);
    printf("Enter Second Number : ");
    scanf("%d", &num2);

    switch (opt)
    {
    case 1:
        printf("Sum of %d and %d is %d", num1,num2,sum(num1,num2));
        break;
    case 2:
        printf("Sbstraction of %d and %d is %d", num1,num2,sub(num1,num2));
        break;
    case 3:
        printf("Mutiplication of %d and %d is %d", num1,num2,mul(num1,num2));
        break;
    case 4:
        printf("Division of %d and %d is %d", num1,num2,div(num1,num2));
        break;
    case 5:
        printf("Modulus of %d and %d is %d", num1,num2,mod(num1,num2));
        break;
    
    default:
        printf(" You have pressed wrong key \n Try again!");
        break;
    }

}