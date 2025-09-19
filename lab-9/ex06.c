#include <stdio.h>
#include <math.h>
float squares1(int num1) {
    return num1 * num1;
}

float squares2(int num2) {
    return num2 * num2;
}

float squares3(float a, float b) {
    return a + b;
}

  

int main() {
    int num1, num2;
    float sq1, sq2, result;

    printf("Input number1: ");
    scanf("%d", &num1);

    printf("Input number2: ");
    scanf("%d", &num2);

    sq1 = squares1(num1);
    sq2 = squares2(num2);

    printf("Square of number1 = %.2f\n", sq1);
    printf("Square of number2 = %.2f\n", sq2);

    result = squares3(sq1, sq2);
    printf("Sum of squares = %.2f\n", result);

    return 0;
}
