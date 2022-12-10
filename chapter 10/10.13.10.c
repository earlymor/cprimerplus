#include<stdio.h>
int* add(int *p1,int*p2,int*p3,int n){
    for(int i=0;i<n;i++){
        *(p3+i)=*(p1+i)+(*(p2+i));
    }return p3;
}
int main(int argc,char **argv ){
    int arr1[4]={2,4,5,8},arr2[4]={1,0,4,6},arr3[4];
    add(arr1,arr2,arr3,sizeof(arr1)/sizeof(arr1[0]));
    return 0;
}