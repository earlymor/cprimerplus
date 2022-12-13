#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc,char **argv ){
    int arr[101];
    srand((unsigned)time(NULL));
    for(int i=0;i<100;i++){
        arr[i]= rand()%10+1;
    }
    for(int i=0;i<99;i++){
        int max=i;
        int t; 
        for(int j=i+1;j<100;j++){
            if(arr[j]>arr[max])max=j;
        }
        t=arr[i];arr[i]=arr[max];arr[max]=t;
    }
    for(int i=0;i<100;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}