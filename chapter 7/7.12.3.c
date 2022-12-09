#include<stdio.h>
int main(int argc,char **argv ){
    int n;
    int cnt1=0,cnt2=0,sum1=0,sum2=0;
    double aver1=0.0,aver2=0.0;
    while(scanf("%d",&n),n!=0){
        if(n%2==0&&n!=0){
            cnt2++;
            sum2+=n;
        }
        if(n%2!=0){
            cnt1++;
            sum1+=n;
        }
    }
    if(cnt1!=0)printf("odd:%d aver:%f\n",cnt1,sum1*1.0/cnt1);
    else printf("odd:%d aver:0.0\n",cnt1);
    if(cnt2!=0)printf("even:%d aver:%f\n",cnt2,sum2*1.0/cnt2);
    else printf("odd:%d aver:0.0\n",cnt2);
    return 0;
}