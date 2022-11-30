//target:float
#include<stdio.h>
int main(int argc,char **argv ){
    float n;
    printf("Enter a floating-point value:");
    scanf("%f",&n);
    printf("fixed-point notation:%f\n",n);
    printf("exponential notation:%e\n",n);
    printf("0x:%a\n",n);//p计数法，p+6是*2^6


    return 0;
}