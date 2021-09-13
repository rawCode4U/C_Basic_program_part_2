// 12. Write a program that accepts input of a number of seconds,
// validates it and outputs the equivalent number of hours, minutes and seconds.

int time_converter(int sec){
    int hr , min;
    min = sec / 60 ;
    hr = min / 60 ;
    min = min % 60 ;
    sec = sec % 60;
    printf(" the equivalent number of %d hours, %d minutes and %d seconds ", hr, min, sec);
    return 0;
}

#include <stdio.h>
int main(){
    int sec;
    printf("Enter number of seconds :  ");
    scanf("%d", &sec);
    printf(" %d secs is ", sec);
    time_converter(sec);
   
}
