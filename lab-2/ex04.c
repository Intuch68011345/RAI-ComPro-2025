#include<stdio.h>
int main(){

    char name[10];
    int ID ;
    float Prs,phs,cal ;


    printf("Enter your Name: ");
    scanf("%s",name);
    printf("Enter your student ID: ");
    scanf("%d",&ID);
    printf("Enter your Programming score:");
    scanf("%f",&Prs);
    printf("Enter your Physics score:");
    scanf("%f",&phs);
    printf("Enter your Calculus score:");
    scanf("%f",&cal);


    printf("Hi %s(%d)! Your GPA is %.2f",name,ID,(Prs+phs+cal)/3);


    return 0 ;
}