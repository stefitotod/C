// Да се напише програма, която при въвеждането на произволен брой числа извежда сборът им. За край на въвеждането се приема въвеждането на 0. 

#include <stdio.h>

int main ()
{
    int num;
    int sum = 0;

    while(num != 0){

        printf("Enter integer: ");
        scanf("%d", &num);
        sum += num;

    }

    printf("%d", sum);
    return 0;
}

