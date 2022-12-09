#include<stdio.h>
double min(double x,double y){
    if(x>y)return y;
    else return x;
}
int main(int argc,char **argv ){
    double x,y;
    scanf("%lf",&x);
    scanf("%lf",&y);
    printf("%f",min(x,y));
    return 0;
}