#include <stdio.h>

int main() {
    int num, square, temp, count = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    square = num * num;
    while (temp != 0) {
        count *= 10;
        temp /= 10;
    }

    if (square % count == num)
        printf("%d is an automorphic number.\n", num);
    else
        printf("%d is not an automorphic number.\n", num);

    return 0;
}
