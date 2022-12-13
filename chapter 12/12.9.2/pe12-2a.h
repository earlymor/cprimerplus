#include<stdio.h>
double distance;
double fuel;
double consumption;
int mode;
void set_mode(int n){
    mode=n;
}
void get_info(){
    if(mode==0){
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf",&fuel);
    }
    else {
        if(mode!=0&&mode!=1)printf("Invalid mode specified.Mode 1(US) used.\n");
        printf("Enter distance traveled in miles: ");
        scanf("%lf",&distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf",&fuel);
    }
    
}
void show_info(){
    if(mode==0){
        consumption=fuel*100/distance;
        printf("Fuel consumption is %.2f liters per 100km.\n",consumption);
    }
    else if(mode){
        consumption=distance/fuel;
        printf("Fuel consumption is %.2f miles per gallon.\n",consumption);
    }
}