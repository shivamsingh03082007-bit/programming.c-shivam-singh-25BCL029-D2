#include<stdio.h>

int main()
{
    int sub1, sub2, sub3;
    float avg, total;

    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;
    avg = total / 3;

    printf("Total marks = %.2f\n", total);
    printf("Average marks = %.2f\n", avg);

    return 0;
}