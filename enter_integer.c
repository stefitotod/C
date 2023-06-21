# Да се прочете от клавиатурата едно целочислено число и да се изведе съобщение, ако то е по-голямо от 6. 

#include <stdio.h>

int main()
{
    int i;
    printf("Enter integer: ");
    scanf("%d", &i);

    if(i > 6)
    {
        printf("Yes");
    }

    return 0;
}
