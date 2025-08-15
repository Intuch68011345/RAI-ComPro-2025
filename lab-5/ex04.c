#include <stdio.h>

int main() {
    int values[10];
    int evenA = 0, oddA = 0;


    for (int i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);

        
        if (values[i] % 2 == 0) {
            evenA++;
        } else {
            oddA++;
        }
    }

    
    printf("Even numbers: %d\n", evenA);
    printf("Odd numbers: %d\n", oddA);

    return 0;
}
