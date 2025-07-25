#include<stdio.h>
int main(){

    int num1, num2 , num3 ;
    int max,min,sum ;
    float avg ;
    printf("Enter integer #1: ");
    scanf("%d",&num1);
    printf("Enter integer #2: ");
    scanf("%d",&num2);
    printf("Enter integer #13: ");
    scanf("%d",&num3);


    //max
    if(num1>num2 && num1>num3){
        max=num1;
    }
    if(num2>num1 && num2>num3){
        max=num2;
    }
    if(num3>num2 && num3>num1){
        max=num3;
    }

    //min
    if(num1<num2 && num1<num3){
        min=num1;
    }
     if(num2<num1 && num2<num3){
        min=num2;
    }
     if(num3<num2 && num3<num1){
        min=num3;
    }

    sum = num1+num2+num3 ;
    avg = sum/3.0 ;
    printf("Minimum: %d\n",min);
    printf("Maximum: %d\n",max);
    printf("Sum: %d\n",sum);
    printf("Average: %.2f\n",avg);
    
    return 0;
}