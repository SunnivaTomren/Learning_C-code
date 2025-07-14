#include <stdio.h>

void upper_word(char* word){
    int i = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            word[i] = (char)(word[i] - 'a' + 'A');
        }
        i++;
    }
}

void lower_word(char* word){
    int i = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            word[i] = (char)(word[i] - 'A' + 'a');
        }
        i++;
    }
}

void split_word(const char* word, char* modified) {
    int len = 0;
    while(word[len] != '\0') {
        len++;
    }
    int split_index = len/2;
    if(len % 2 != 0) {
        split_index += 1;
    }

    int i = 0;

    for (; i < split_index; i++) {
        modified[i] = word[i];
    }

    modified[i++] = '-';

    int j = split_index;
    while (word[j] != '\0') {
        modified[i++] = word[j++];
    }
    modified[i] = '\0';
}

int main(void) {
    char word[100];
    char split[110];
    printf("Write a word: \n");
    scanf("%s", word);
    upper_word(word);
    printf("\n The word in big letters is: %s", word);
    lower_word(word);
    printf("\n The word in small letters is: %s", word);
    split_word(word, split);
    printf("\n The split word looks like this: %s", split);
    return 0;
}
