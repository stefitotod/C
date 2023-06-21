// Напишете функция, която връща броя на гласните в низ.

#include <stdio.h>

void count_vowels() {

    int c = 0, count = 0;
    char s1[100];

    printf("Enter a string: ");
    gets(s1);

    while (s1[c] != '\0') {
        if (s1[c] == 'a' || s1[c] == 'A' || s1[c] == 'e' || s1[c] == 'E' || s1[c] == 'i' || s1[c] == 'I' || s1[c] =='o' || s1[c]=='O' || s1[c] == 'u' || s1[c] == 'U')
            count++;
        c++;
  }

  printf("Number of vowels: %d", count);

}

int main() {

  count_vowels();

  return 0;

}
