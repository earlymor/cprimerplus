//statistics use if else if
#include<stdio.h>
int main(int argc,char **argv ){
    int cnt1=0,cnt2=0,cnt3=0;
    char ch;
    while((ch=getchar())!='#'){
        if(' '==ch)cnt1++;
        else if('\n'==ch)cnt2++;
        else cnt3++;
    }
    printf("space:%d\n\\n:%d\nothers:%d\n",cnt1,cnt2,cnt3);
    return 0;
}