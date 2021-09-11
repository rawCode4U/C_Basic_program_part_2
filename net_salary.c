//6. Write a program to calculate Net Salary of an employee.
// HRA is 20% of BS, DA is 40% of BS, PF is 10% of GS

#include <stdio.h>

float netSalary(float basic_salary){
    float da, hra, pf, net_salary ;  // Dearness Allowance (DA) & House Rent Allowance (HRA)
    da = (basic_salary * 40) / 100 ; // DA is 40%
    hra = (basic_salary * 20) / 100 ; // HRA is 20 %
    pf = (basic_salary * 10) / 100 ; // PF is 10 %
    net_salary = ((basic_salary + da + hra) - pf) ;

    return net_salary;
}


int main()
{
    float basic_salary ;
    printf("Please Enter the Ramesh’s basic salary : Rs. ");
    scanf("%f", &basic_salary);
    printf("Net Salary of Ramesh is Rs. %.2f", netSalary(basic_salary));
    return 0;
}