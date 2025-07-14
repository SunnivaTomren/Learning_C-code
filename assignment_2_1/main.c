#include <ctype.h>
#include <stdio.h>

int length_word(const char word[]){
    int i = 0;
    while  ((int)word[i] != '\0') i++; {
    }
    return i;
}

int palindrome(char word[]) {
    int palindrome1 = 0;
    for (int i = 0; i < length_word(word); i++) {
        if (tolower(word[i]) == tolower(word[length_word(word) - i - 1])) {
            palindrome1 = 1;
        }
        else {
            palindrome1 = 0;
            break;
        }
    }
    return palindrome1;
}

void palindrome_result(char word[]) {
    if (palindrome(word) == 0) {
        printf("%s is not a palindrome \n", word);
    }
    else {
        printf("%s is a palindrome \n", word);
    }
}

void reversed_word(char word[]) {
    int start = 0;
    int end = length_word(word) - 1;
    while (start < end) {
        char temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }

}

int main(void) {
    char word[100];
    printf("write a word: \n");
    scanf("%s", word);
    printf("The length of the word is: %i \n", length_word(word));
    palindrome_result(word);
    reversed_word(word);
    printf("The word reversed is: %s \n", word);
    return 0;
}
