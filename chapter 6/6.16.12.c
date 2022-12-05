#include<stdio.h>
double multi(int n){
    double sum;
    for(int i=1.0;i<=n;i++){
        if(i%2==0)sum+=-1.0/i;
        else sum+=1.0/i;
    }return sum;
}
int main(int argc,char **argv ){
    int n;double ret;
    while(scanf("%d",&n),n>0){
        ret=multi(n);
        printf("%f\n",ret);
    }
    return 0;
}