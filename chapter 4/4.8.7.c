//float double
#include<stdio.h>
#include<float.h>
int main(int argc,char **argv ){
    double m=1.0/3.0;
    float n=1.0/3.0;
    printf("%.6f\n%.6f\n",m,n);
    printf("%.12f\n%.12f\n",m,n);
    printf("flt_dig=%d\n",FLT_DIG);
    printf("dbl_dig=%d",DBL_DIG);
    return 0;
}