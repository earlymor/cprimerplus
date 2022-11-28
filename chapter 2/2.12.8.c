//target:call the function one_three()
#include<stdio.h>
void three(){
    printf("three\n");
}
void two(){
    printf("two\n");
    three();
}
void one_three(){
    printf("one\n");
    two();
}
int main(int argc,char **argv ){
    printf("starting now:\n");
    one_three();
    printf("done!");
    return 0;
}