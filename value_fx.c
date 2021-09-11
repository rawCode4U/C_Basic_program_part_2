// 7. Write a program which reads 4 numbers a, b, c and p. Let f(x)=ax2+bx+c.
// The Program outputs the value of f(p) e.g 4 3 1 2 out put 4(2)?+3(2)+1=23 

#include <stdio.h>

int fx(int a, int b, int c, int p){
    int fx;
    fx = a * p * p + b * p + c;

    return fx;
}


int main()
{
    int a,b,c,p ;
    printf("Please Enter value od a, b, c and p \n");
    scanf("%d %d %d %d", &a, &b, &c, &p);
    printf("value of f(p) is %d", fx(a, b, c, p));
    return 0;
}