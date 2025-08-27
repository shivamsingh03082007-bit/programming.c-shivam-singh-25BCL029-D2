#include <stdio.h>

int main() {
    double num1, num2, result;

    
    printf("Enter the dividend: ");
    scanf("%lf", &num1);

    
    printf("Enter the divisor: ");
    scanf("%lf", &num2);

    
    if (num2 == 0) {
        printf("Error: Division by zero is not allowed.\n");
    } else {
       
        result = num1 / num2;

       
        printf("The result of %.2lf divided by %.2lf is %.2lf\n", num1, num2, result);
    }

    return 0;
}
