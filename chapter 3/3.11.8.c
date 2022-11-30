//target:pint->cup->ounce->large spoon->tea spoon
#include<stdio.h>
int main(int argc,char **argv ){
    float V;
    printf("请输入杯数：");
    scanf("%f",&V);
    printf("convert to pint:%f\n",V/2);
    printf("convert to ounce:%f\n",V*8);
    printf("convert to large spoon:%f\n",V*8*2);
    printf("convert to tea spoon:%f\n",V*8*2*3);
    
    return 0;
}