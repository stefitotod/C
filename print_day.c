// Да се прочете от клавиатурата едно число от 1 до 7 и да се изведе на екрана кой ден от седмицата съответства на това число.
// Да се предвиди случай, когато не е въведено валидно число.

#include <stdio.h>

int main()
{
    int day;
    printf("Enter number from 1 to 7: ");
    scanf("%d", &day);

    switch(day)
    {
    case 1:
        printf("Monady");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Sorry");
    }
    return 0;
}
