#include<stdio.h>
int main(){

char Name[10] , Gender[5] ,Edu[20], edu2[20];
    int age, weight ;
    float height ;

    printf("Enter your Name: ");
    scanf("%s",Name);
    printf("Enter your Age: ");
    scanf("%d",&age);
    printf("Enter your height: ");
    scanf("%f",&height);
    printf("Enter your weight: ");
    scanf("%d",&weight);
    printf("Enter your gender: ");
    scanf("%s",Gender);
    printf("Enter your Education Qualification: ");
    scanf("%s %s ",Edu,edu2);



    printf("Name: %s\n",Name);
    printf("Age: %d\n",age);
    printf("Height: %.1f\n",height);
    printf("Weight: %d\n",weight);
    printf("Gender: %s\n",Gender);
    printf("Education: %s %s",Edu,edu2);



    return 0 ;
}