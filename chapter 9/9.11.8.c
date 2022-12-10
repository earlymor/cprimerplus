//power()
#include<stdio.h>
double power(double x,int n){
    double ret=1.0;
    if(x==0){
        if(n==0){
            printf("未定义因此处理为");
            return 1;
        }else return 0;
    }
    if(n>0){
        for(int i=0;i<n;i++){
            ret*=x;
        }return ret;
    }else if(n==0){
        return 1;
    }else {
        for(int i=0;i<-n;i++){
            ret/=x;
        }return ret;
    }
}
int main(int argc,char **argv ){
    double x;
    int n;
    scanf("%lf%d",&x,&n);
    printf("%f",power(x,n));
    return 0;
}