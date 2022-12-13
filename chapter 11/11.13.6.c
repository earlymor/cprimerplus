#include<stdio.h>
int is_within(char str[],char ch){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch)return 1;
    }return 0;
}
int main(int argc,char **argv ){
    char str[10]={"happy"};
    char ch;
    while((ch=getchar())!=EOF){
        if(is_within(str,ch))printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}