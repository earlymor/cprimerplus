#include<stdio.h>
int main(int argc,char **argv ){
    char ch;
    scanf("%c",&ch);
    for(int i=0;i<=ch-'A';i++){
        for(int j=ch-'A';j>i;j--){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%c",'A'+j);
        }
        for(int j=i-1;j>=0;j--){
            printf("%c",'A'+j);
        }
        printf("\n");
    }
    return 0;
}