#include<stdio.h>
int main(int argc,char **argv ){
    int arr[8];
    int n=2;
    for(int i=0;i<8;i++){
        arr[i]=n;
        n*=2;
    }
    int i=0;
    do{
        printf("2^%d=%d\n",i+1,arr[i]);
        i++;
    }while(i<8);
    return 0;
}