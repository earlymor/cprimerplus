//name number
#include<stdio.h>
#include<string.h>
int main(int argc,char **argv ){
    char family[100];
    char name[100];
    scanf("%s %s",family,name);
    printf("%s %s\n%*d %*d\n",family,name,strlen(family),strlen(family),strlen(name),strlen(name));
    printf("%s %s\n%-*d %-*d\n",family,name,strlen(family),strlen(family),strlen(name),strlen(name));
    return 0;
}