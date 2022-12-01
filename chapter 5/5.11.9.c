//C->F->K
#include<stdio.h>
void Temperatures(double tem){
    const double K=273.26;
    double c;
    c=5.0/9.0*(tem-32.0);
    printf("Fahrenheit:%.2f\n",tem);
    printf("Celsius:%.2f\n",c);
    printf("Kelvin:%.2f\n",c+K);
}
int main(int argc,char **argv ){
    double tem;
    while(scanf("%f",&tem)==1){
        Temperatures(tem);
    }
    return 0;
}