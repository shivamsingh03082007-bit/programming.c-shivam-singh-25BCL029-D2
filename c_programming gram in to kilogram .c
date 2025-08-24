#include<stdio.h>
int main () {
    int grams;
    int kilograms;
    printf("enter the weight in grams:");
    scanf("%d",&grams);
    kilograms=grams/1000;
    printf("the weight in kilograms is %d",kilograms);
    return 0;
    
}