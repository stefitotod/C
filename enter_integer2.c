// Да се прочете от клавиатурата едно целочислено число и да се изведе на екрана съобщение, ако остатъкът от делението му с 8 е по-голям от 4. 

#include <stdio.h>

int main()
{
    int i;
    printf("Enter integer: ");
    scanf("%d", &i);

    if(i % 8 > 4)
    {
        printf("Yes");
    }

    return 0;
}
