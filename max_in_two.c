// 17. WAP to find maximum between two numbers using switch statement.

int max_num(int max, int num1 , int num2){
     
    switch (max)
    {
    case 0:
        max = num2;
        break;
    case 1:
        max = num1;
        break;
    default:
        break;
    }
   return max;
}

#include <stdio.h>
int main(){
    int num1, num2 , max;
    printf("Please enter two numbers : \n");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2);
    printf("In %d and %d >>> %d is maximum", num1, num2, max_num(max, num1,num2));
    
}