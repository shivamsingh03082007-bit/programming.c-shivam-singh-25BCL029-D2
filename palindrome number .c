#include <stdio.h>

int main() {
    int number, reverse = 0, original, remainder;
    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;
    while (number != 0) {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number = number / 10;
    }

    if (original == reverse)
        printf("%d is a palindrome number.\n", original);
    else
        printf("%d is not a palindrome number.\n", original);

    return 0;
}
