#include<stdio.h>
void input(char str[]){
    char ch;
    int i=0;
    
    while(ch=getchar(),ch==' '||ch=='\n'||ch=='\t');
    str[i]=ch;i++;
    while(ch=getchar(),ch!=' '&&ch!='\n'&&ch!='\t'){
        str[i]=ch;
        i++;
    }
}
int main(int argc,char **argv ){
    char ch,str[100];
    int i=0;
    printf("请输入一个单词");
    input(str);
    fputs(str,stdout);
    return 0;
}