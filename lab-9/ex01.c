#include<stdio.h>
#include<math.h>
#define PI 3.14

float Circumference(float);
float Circle_area(float);

int main() { 
    float radius;
    printf("Input radius: "); 
    scanf("%f", &radius);
    
    
    printf("Circle area = %.2f\n", Circle_area(radius));  
    printf("Circumference = %.2f\n", Circumference(radius));
    
    return 0;
}

float Circle_area(float rad) {
    float answer1 = 0;
    answer1 = PI*rad*rad;  
    return answer1;
}

float Circumference(float rad) {
    float answer2 = 0;
    answer2 = PI*rad*2.0;  
    return answer2;
}

