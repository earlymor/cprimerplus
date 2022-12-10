//fn:harmonic mean
#include<stdio.h>
double harm(double m,double n){
    double x=1.0/m,y=1.0/n;
    double aver=(x+y)/2.0;
    double ret=1.0/aver;
    return ret;
}
int main(int argc, char**argv ){
    double m,n;
    scanf("%lf %lf",&m,&n);
    printf("%f",harm(m,n));
    return 0;
}