//target:call the function br() and ic()
#include<stdio.h>
void br(){
    printf("Brazil,Russia");
}
void ic(){
    printf("India,China");
}
int main(int argc,char **argv ){
    br();
    printf(", ");
    ic();
    printf("\n");
    ic();
    printf(",\n");
    br();
    return 0;
}