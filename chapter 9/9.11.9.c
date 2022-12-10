//rpower
#include<stdio.h>
double rpower(double x,int n){
    double ret=1.0;
    if(x==0){
        if(n==0){
            printf("未定义因此处理为");
            return 1;
        }else return 0;
    }
    if(n>0){
        return x*rpower(x,n-1);
    }else if(n==0){
        return 1;
    }else {
        return 1.0/rpower(x,-n);
    }
}

int main(int argc,char **argv ){
    double x;
    int n;
    scanf("%lf%d",&x,&n);
    printf("%f",rpower(x,n));
    return 0;
}