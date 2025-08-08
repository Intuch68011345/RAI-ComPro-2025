#include<stdio.h>
int main(){

int number, sum = 0,i;
    float average;

    for(i = 1;i<= 10;i++) {
        printf("%d.Enter the number: ",i);
        scanf("%d", &number);
        sum += number;
    }

    average = sum / 10.0;

    printf("\nTotal sum is %d\n", sum);
    printf("Average is %.2f\n", average);




    return 0;
}