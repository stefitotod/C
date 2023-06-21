// Напишете функция, която намира дължината на низ без да ползвате вградените.

#include <stdio.h>

void myFunction() {

    char s[100];
    int i;

    printf("Enter a string: ");
    gets(s);

    for(i = 0; s[i] != '\0' ; i++);

    printf("Length of the string is: %d", i);

}

int main() {

    myFunction();

    return 0;

}
