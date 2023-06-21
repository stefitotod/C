// Да се напише програма, която прочита от клавиатурата две реални числа и извежда стойностите на фукция f(x) = x*x-4 за всички стойности в дадения интервал. 
// Стъпката на обхождане е 0.01

#include <stdio.h>

int main()
{
    float num1, num2;
    printf("Enter two float numbers: ");
    scanf("%f %f", &num1, &num2);
    float result = 0;

    for(num1, num2; num1 < num2; num1 += 0.01){
        result = num1*num1-4;
        printf("\nThis is the result:%f", result);
    }
    return 0;
}
