#include<stdio.h>
int main()
{
    float basic_salary, hra, da, gross_salary, pf, net_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    
    
    hra = 0.20 * basic_salary; 
    da = 0.10 * basic_salary;  
    
    
    gross_salary = basic_salary + hra + da;
    
    
    pf = 0.12 * basic_salary; 
    
    
    net_salary = gross_salary - pf;
    
    
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Net Salary: %.2f\n", net_salary);
    
    return 0;
}
