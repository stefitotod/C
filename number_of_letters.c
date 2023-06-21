// Напишете програма, която изкарва колко пъти се среща всяка буква в низ.

#include <stdio.h>

int main() {

    char s[100];
    int i = 0, count[26] = {0}, x;

    printf("Enter a string: ");
    gets(s);

    while(s[i] != '\0'){
        if(s[i] >= 'a' && s[i] <= 'z'){
            x = s[i] - 'a';
            count[x]++;
        }

    i++;

    }

    for(i = 0; i < 26; i++)

    printf("%c - %d\n", i + 'a', count[i]);

    return 0;

}
