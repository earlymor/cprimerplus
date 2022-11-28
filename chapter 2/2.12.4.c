//target:call the function jolly() and deny()
#include<stdio.h>
void jolly(){
        printf("For he's a jolly good fellow!\n");
    
}
void deny(){
    printf("Which nobody can deny!\n");
}
int main(int argc,char **argv ){
    jolly();
    jolly();
    jolly();
    deny();
    return 0;
}