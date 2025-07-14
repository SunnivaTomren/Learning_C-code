#include <stdio.h>
void count_word(const char* word){
    char c[99];
    int i = 0;
    while (word[i] != '\0') {
        c[i] = word[i];
        i++;
    }
    c[i] = '\0';
    i = 0;
    while (c[i] != '\0') {
        if (c[i] >= 'A' && c[i] <= 'Z') {
            c[i] = (char)(c[i] - 'A' + 'a');
        }
        i++;
    }
    int counts[26] = {0};
    i = 0;
    while (c[i] != '\0') {
        int index = c[i] - 'a';
        if (index >= 0 && index < 26) {
            counts[index]++;
        }
        else {
            fprintf(stderr, "Invalid character: %c\n", c[i]);
        }
        i++;
    }
    for (int j = 0; j < 26; j++) {
        if (counts[j] > 0) {
            printf("%c: %d\n", j + 'a', counts[j]);
        }
    }
}


int main(void) {
char word[100];
    printf("Enter a word: \n");
    scanf("%s", word);
    printf("\n The entered word is %s \n", word);
    printf("\nLetter counts:\n");
    count_word(word);
    return 0;
}