//max
#include<stdio.h>
int max(int arr[],int len){
    int max=arr[0];
    for(int i=1;i<len;i++){
        if(max<arr[i])max=arr[i];
    }return max;
}
int main(int argc,char **argv ){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    printf("%d",max(arr,sizeof(arr)/sizeof(arr[0])));
    return 0;
}