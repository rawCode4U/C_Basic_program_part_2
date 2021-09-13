// 2.WAP, which reads two numbers and find the sum of product of digits of the number. 
// If Numbers are 224 and 37 then Answer is 2*3+2*7+2*3+2*7+4*3+4*7=80 

 int sop(int num1 , int num2){
     int b, sum = 0;
     b = num2; 
     while(num1 > 0){
         num2 = b;
        while (num2 > 0)
        {
            sum += ( (num1 % 10) * (num2 % 10));
            num2 = num2 / 10;
        } 
        num1 = num1/10;
        num2 = num2 / 10;
        
    }

    return sum;
 }

#include<stdio.h>
int main(){
    int num1 , num2;
    
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);
    
     printf("%d", sop(num1,num2) ); 

    return 0;  
}