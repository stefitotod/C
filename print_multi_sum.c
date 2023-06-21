// Да се напише програма, която прочита от клавиатурата две числа и извежда сумата на четните числа и произведението на нечетните, 
// които се намират между тези две числа. 

#include <stdio.h>

int main()
{
    int i, j;
    printf("Enter two integers: ");
    scanf("%d %d", &i, &j);
    i += 1;

    int sum = 0;
    int multi = 1;

    for(i, j; i < j; i++){
        if(i % 2 == 0){
            sum += i;
        }
        else{
            multi *= i;
        }
    }

    printf("Multi: %d", multi);
    printf("\nSum: %d", sum);

    return 0;
}
