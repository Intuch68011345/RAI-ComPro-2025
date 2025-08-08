#include<stdio.h>
int main (){
    int number, sum = 0,i=1;
    float average;
    

    while(i<= 10) {
        printf("%d.Enter the number: ",i);
        scanf("%d", &number);
        sum += number;
        i++
    }

    average = sum / 10.0;

    printf("\nTotal sum is %d\n", sum);
    printf("Average is %.2f\n", average);

















    return 0;
}