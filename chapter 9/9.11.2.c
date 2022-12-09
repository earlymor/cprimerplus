#include<stdio.h>
void chline(char ch,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%c",ch);
        }
        printf("\n");
    }
}
int main(int argc,char **argv ){
    char ch='*';
    int i=5,j=4;
    chline(ch,i,j);
    return 0;
}