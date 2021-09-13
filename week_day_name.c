// 15. WAP to read weekday number and print weekday name using switch statement.

void weekday_name(weekday_num){
    switch (weekday_num)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesady");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thrusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    
    default:
        printf(" You enter wrong weekday number please eneter number from 1 to 7");
        break;
    }
 
}
#include <stdio.h>
int main(){
    int weekday_num;
    printf("Enter Weekday Number : ");
    scanf("%d", &weekday_num);
    weekday_name(weekday_num);
    
}