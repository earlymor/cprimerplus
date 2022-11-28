//target:Convert inches to centimeters
//1 inch = 2.54 cm
#include<stdio.h>
int main(int argc,char **argv ){
    double inch;
    printf("Please enter a value in inches:");
    scanf("%lf",&inch);
    printf("Converted to cm is:%.2fcm",inch*2.54);
    return 0;
}