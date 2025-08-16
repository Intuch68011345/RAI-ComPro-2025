#include<stdio.h>

int main () {
    int A , B ;
    printf("Enter your number1 ");
    scanf("%d",&A);
    printf("Enter your number2 ");
    scanf("%d",&B);
    if(A == B){
        printf("Match\n");
    } else { //  != คือไมาเท่า
        printf("Not match\n");
    }


        return 0 ;
    }