#include<stdio.h>
int main()
{
    float dollar,rs;
    printf("Enter the amount in dollars: ");
    scanf("%f",&dollar);
    rs=dollar*82.74;
    printf("The amount in Rs is: %.2f",rs);
    return 0;
}