#include<stdio.h>
int main(int argc,char **argv ){
    char ch;
    int cnt=0;
    while(scanf("%c",&ch)!=EOF){
        cnt++;
    }
    printf("%d",cnt);
    return 0;
}