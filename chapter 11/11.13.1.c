#include<stdio.h>
void input(char str[],int n){
    for(int i=0;i<n;i++){
        str[i]=getchar();
    }
}
int main(int argc,char **argv ){
    int n;
    scanf("%d",&n);
    char str[n+1];
    input(str,n);
    puts(str);
    fputs(str,stdout);
    return 0;
}