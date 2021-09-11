//5. Write a program to accept marks of five subjects from the user and calculate their average. 

#include <stdio.h>

float avgMarks(float sub1 , float sub2, float sub3, float sub4, float sub5){
    float avgMarks;
    avgMarks = (sub1 + sub2 + sub3 + sub4  + sub5) / 5;
    return avgMarks;
}

int main()
{
    float sub1,sub2,sub3,sub4,sub5 ;
    printf("Enter marks obtain in 5 subject \n");
    scanf("%f%f%f%f%f", &sub1,&sub2,&sub3,&sub4,&sub5);
    printf("Your Average Marks = %.2f \n",avgMarks(sub1,sub2,sub3,sub4,sub5));
    return 0;
}