#include<stdio.h>
int main(int argc,char **argv ){
    char ch;int cnt=0;
    while((ch=getchar())!='#'){
        printf("%c:%d\t",ch,ch);
        cnt++;
        if(cnt%8==0){
            printf("\n");
        }
    }
    return 0;
}