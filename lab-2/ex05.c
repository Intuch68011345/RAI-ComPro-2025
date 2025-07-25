#include<stdio.h>
int main(){

    char name[10],sur[10],UNI[20];
    int age ;
    float height ;
    printf("Enter your full name:");
    scanf("%s %s",name,sur);
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your heght:");
    scanf("%f",&height);
    printf("Enter you University name:");
    scanf("%s",UNI);

    printf("Hi! Everyone. This is %c.%s from %s.I am %d year old and my height is %.2f cm tall.",sur[0],name,UNI,age,height);



    






    return 0;

}