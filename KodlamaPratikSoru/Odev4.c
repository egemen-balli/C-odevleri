#include <stdio.h>
#include <stdbool.h>

bool doesContain(char *word, char *key) {
    for (int i = 0, j = 0; word[i] != '\0'; i++) {
            if (word[i] == key[j]) {
                j++;
                if(key[j] == '\0'){
                    return true;
                }
            } else {
                j = 0;
            }
    }
    return false;
}

int main() {
    char *word_list[] = {"apple", "application", "banana", "art", "ball", "cat"};
    int word_count = 6;
    char *key = "app";

    for (int i = 0; i < word_count; ++i) {
        if(doesContain(word_list[i], key)){
            printf(word_list[i]);
            printf("\n");
        }
    }

    return 0;
}
