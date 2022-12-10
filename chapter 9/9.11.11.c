#include<stdio.h>
//1 1 2 3 5 8 13
int Fibonacci2(int n){
    int a=1,b=1,c;
    if(n<3)return 1;
    else {
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }return c;
    }
}
int Fibonacci(int n){
    if(n>2)return Fibonacci(n-1)+Fibonacci(n-2);
    else return 1;
}
int main(int argc,char **argv ){
    int n;
    scanf("%d",&n);
    printf("%d",Fibonacci2(n));
    return 0;
}