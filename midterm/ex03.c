#include <stdio.h>

void fullPyramid(int rows) {
    int i, j, space;
    printf("\nFull Pyramid (Solid):\n");
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
}

void hollowFullPyramid(int rows) {
    int i, j, space;
    printf("\nFull Pyramid (Hollow):\n");
    for (i = 1; i <= rows; i++) {
        for (space = 1; space <= rows - i; space++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            if (j == 1 || j == 2 * i - 1 || i == rows) printf("*");
            else printf(" ");
        printf("\n");
    }
}

void invertedFullPyramid(int rows) {
    int i, j, space;
    printf("\nInverted Full Pyramid (Solid):\n");
    for (i = rows; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++) printf("*");
        printf("\n");
    }
}

void hollowInvertedFullPyramid(int rows) {
    int i, j, space;
    printf("\nInverted Full Pyramid (Hollow):\n");
    for (i = rows; i >= 1; i--) {
        for (space = 1; space <= rows - i; space++) printf(" ");
        for (j = 1; j <= 2 * i - 1; j++)
            if (j == 1 || j == 2 * i - 1 || i == rows) printf("*");
            else printf(" ");
        printf("\n");
    }
}

void halfLeft(int rows) {
    int i, j;
    printf("\nHalf Left Pyramid (Solid):\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

void hollowHalfLeft(int rows) {
    int i, j;
    printf("\nHalf Left Pyramid (Hollow):\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++)
            if (j == 1 || j == i || i == rows) printf("*");
            else printf(" ");
        printf("\n");
    }
}

void halfRight(int rows) {
    int i, j;
    printf("\nHalf Right Pyramid (Solid):\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) printf(" ");
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

void hollowHalfRight(int rows) {
    int i, j;
    printf("\nHalf Right Pyramid (Hollow):\n");
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) printf(" ");
        for (j = 1; j <= i; j++)
            if (j == 1 || j == i || i == rows) printf("*");
            else printf(" ");
        printf("\n");
    }
}

void invertedHalfLeft(int rows) {
    int i, j;
    printf("\nInverted Half Left Pyramid (Solid):\n");
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

void hollowInvertedHalfLeft(int rows) {
    int i, j;
    printf("\nInverted Half Left Pyramid (Hollow):\n");
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= i; j++)
            if (j == 1 || j == i || i == rows) printf("*");
            else printf(" ");
        printf("\n");
    }
}

void invertedHalfRight(int rows) {
    int i, j;
    printf("\nInverted Half Right Pyramid (Solid):\n");
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) printf(" ");
        for (j = 1; j <= i; j++) printf("*");
        printf("\n");
    }
}

void hollowInvertedHalfRight(int rows) {
    int i, j;
    printf("\nInverted Half Right Pyramid (Hollow):\n");
    for (i = rows; i >= 1; i--) {
        for (j = 1; j <= rows - i; j++) printf(" ");
        for (j = 1; j <= i; j++)
            if (j == 1 || j == i || i == rows) printf("*");
            else printf(" ");
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    // Call all pyramid functions
    fullPyramid(rows);
    hollowFullPyramid(rows);
    invertedFullPyramid(rows);
    hollowInvertedFullPyramid(rows);
    halfLeft(rows);
    hollowHalfLeft(rows);
    halfRight(rows);
    hollowHalfRight(rows);
    invertedHalfLeft(rows);
    hollowInvertedHalfLeft(rows);
    invertedHalfRight(rows);
    hollowInvertedHalfRight(rows);

    return 0;
}
