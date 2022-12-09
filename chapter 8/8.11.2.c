#include<stdio.h>
int main(int argc,char **argv ){
    char ch;
    int cnt=0;
    while((ch=getchar())!=EOF){
        if(ch>32){
            printf("%c--%d ",ch,ch);
            cnt++;
        }
        
        else if(ch==32){
            printf("space--%d ",ch);
            cnt++;
        }
        else {
            if(ch==0)printf("NULL--%d ",ch);
            if(ch==10)printf("\\n--%d ",ch);
            if(ch==11)printf("\\t--%d ",ch);
            if(ch!=10&&ch!=11&&ch!=0)printf("^%c--%d ",ch+64,ch);
            cnt++;
        }
        if(cnt%10==0)printf("\n");
        
    }
    
}