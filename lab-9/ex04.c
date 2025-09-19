#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_vowels(const char str[]) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char input[100];

    printf("Input: ");
    fgets(input, sizeof(input), stdin);

    
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    int vowel_count = count_vowels(input);

    printf("Output: Number of vowels: %d\n", vowel_count);

    return 0;
}
