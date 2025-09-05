#include <stdio.h>

int main() {
    
    struct Student {
        char name[100];
        int age;
        float score;
    };

    struct Student students[3];

    
    for (int i = 0; i < 3; i++) {
        printf("Enter Student %d's name: ", i + 1);
        scanf(" %[^\n]", students[i].name); 

        printf("Enter Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Enter Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);

        printf("\n");
    }

    
    for (int i = 0; i < 3; i++) {
        printf("Student %d's name: %s\n", i + 1, students[i].name);
        printf("Student %d's age: %d\n", i + 1, students[i].age);
        printf("Student %d's score: %.1f\n\n", i + 1, students[i].score);
    }

    
    int maxIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (students[i].score > students[maxIndex].score) {
            maxIndex = i;
        }
    }

    
    printf("The highest score belongs to %s at %.1f scores!\n",
           students[maxIndex].name, students[maxIndex].score);

    return 0;
}
