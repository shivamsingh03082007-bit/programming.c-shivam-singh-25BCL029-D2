#include<stdio.h>
int main()
{
    float rs,dollars;
    printf("Enter the amount in Rs: ");
    scanf("%f",&rs);
    dollars=rs/76.23;
    printf("The amount in dollars is: %.2f",dollars);
    return 0;
}
