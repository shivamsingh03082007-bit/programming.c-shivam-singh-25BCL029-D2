#include <stdio.h>

int main() {
    int minutes;
    int hours;

    printf("Enter hour: ");
    scanf("%d", &hours);

    hours = hours / 60;

    printf("minutes: %d\n", minutes);

    return 0;
}
