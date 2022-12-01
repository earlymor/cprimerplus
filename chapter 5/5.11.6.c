#include<stdio.h>
int main(int argc,char **argv ){
    int n;int i=1;int sum=0;
    scanf("%d",&n);
    while(i<=n){
        sum+=i*i;
        i++;
    }
    printf("%d",sum);
    return 0;
}