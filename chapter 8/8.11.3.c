#include<stdio.h>
int main(int argc,char **argv ){
    char ch;
    int cnt1=0,cnt2=0;
    while((ch=getchar())!='#'){
        if(ch>='A'&&ch<='Z')cnt1++;
        if(ch>='a'&&ch<='z')cnt2++;
    }
    printf("capital letters:%d\n",cnt1);
    printf("lowercase letters:%d\n",cnt2);
    return 0;
}