#include<stdio.h>

int main() {
    float sales, discount, net_sales;
    printf("Enter the sales amount: ");
    scanf("%f", &sales);
    discount = sales * 0.10; 
    net_sales = sales - discount; 
    printf("Net sales after 10%% discount: %.2f\n", net_sales);
    return 0;
}