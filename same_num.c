// Да се напише програма, която чете три числа и отпечатва дали са еднакви (yes/no).

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter 3 numbers: ");
    scanf("%i %i %i", &num1, &num2, &num3);

    if((num1 == num2) && (num1 == num3) && (num2 == num3)){
        printf("Yes");
    }
    else{
        printf("No");
    }

    return 0;
}
