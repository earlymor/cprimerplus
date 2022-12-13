#include<stdio.h>
int func(){
    static int cnt=0;
    cnt++;
    return cnt;
}
int main(int argc,char **argv ){
    for(int i=0;i<5;i++){
        printf("%d",func());
    }
    return 0;
}