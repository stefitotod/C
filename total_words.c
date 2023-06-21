// Напишете програма, която намира броя на думите в низ.

#include <stdio.h>

int main(){

    char s[100];
    int i, words = 0;

    printf("Enter a string: ");
    gets(s);

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] == ' '){
            words++;
        }
    }

    printf("The number of total words: %d", words + 1);

    return 0;
}
