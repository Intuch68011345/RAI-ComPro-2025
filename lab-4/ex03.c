#include<stdio.h>
int main (){
     int number;

    do {
        printf("Enter the number: ");
        scanf("%d", &number);

        if (number == 0) {
            printf("Exiting Program... Bye\n");
        } else if (number % 2 == 0) {
            printf("%d is even.\n", number);
        } else {
            printf("%d is odd.\n", number);
        }

    } while (number != 0);


    return 0;
}