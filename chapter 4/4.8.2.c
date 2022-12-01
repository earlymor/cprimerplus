//target:printf width
#include<stdio.h>
#include<string.h>
int main(int argc,char **argv ){
    char name[100];
    printf("请输入姓名:");
    scanf("%s",name);
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("%*s\n",strlen(name)+3,name);
    return 0;
}