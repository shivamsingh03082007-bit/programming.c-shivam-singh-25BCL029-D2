#include <stdio.h>
int main (){
    int kilograms;
    int grams;
    printf("enter the weught in kilograms:");
    scanf("%d",&kilograms);
    grams=kilograms*1000;
    printf("the weight in grams is %d",grams);
    return 0;

}