#include <stdio.h>

int main() {
    int a, b, temp;

    
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    
    temp = a;
    a = b;
    b = temp;


    printf("After swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
