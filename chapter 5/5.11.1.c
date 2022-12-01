//min time
#include<stdio.h>
#define hour 60 
int main(int argc,char **argv ){    
    int min;
    while(scanf("%d",&min)>0){
        printf("%dh:%02dmin",min/hour,min%hour);
    }

    return 0;
}