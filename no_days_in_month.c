// 16. WAP to find number of days in a month using switch statement.
void month_day(int mon_type , int month){
    switch (mon_type)
    {
    case 28:
        printf("In %dnd month 28 days", month);
        break;
    case 30:
        printf("In %dth month 30 days", month);
        break;
    case 31:
        printf("In %d month 31 days", month);
        break;
    
    default:
        printf(" You enter wrong month name. Try again with first three letters of month ");
        break;
    }
 
}
  
#include <stdio.h>
int main(){
    int month;
    int mon_type,mon_type_28, mon_type_30, mon_type_31;
    printf("Enter month number from 1 to 12 : ");
    scanf("%d", &month);

    mon_type_28 =(month == 2);
    mon_type_30 =(month == 4 || month == 6 || month == 9|| month == 11 );
    mon_type_31 = (month == 1 || month == 3 || month == 5 || month == 7 ||
                   month == 8|| month == 10 || month == 12);

    if(mon_type_28){
         mon_type = 28;
     }else if (mon_type_30){
         mon_type = 30;
     }else if(mon_type_31 ){
         mon_type = 31;
     }else{
         mon_type =0;
     }
    month_day(mon_type , month);

}