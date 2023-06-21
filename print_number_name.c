// Да се прочете от клавиатурата цифра и да се изведе на екрана нейното име. Да се използва оператор switch-case.

#include <stdio.h>

int main()
{
    int i;
    printf("Enter integer: ");
    scanf("%d", &i);

    switch(i)
    {
    case 0:
        printf("Zero");
        break;
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    case 4:
        printf("Four");
    case 5:
        printf("Five");
        break;
    case 6:
        printf("Six");
        break;
    case 7:
        printf("Seven");
        break;
    case 8:
        printf("Eight");
        break;
    case 9:
        printf("Nine");
        break;
    }
    return 0;
}
