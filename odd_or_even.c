// Напишете функция, която проверява дали конкретно число е четно или нечетно. 

#include <stdio.h>

void even_or_odd(a)
{
    if(a % 2 == 0){
        printf("This is even number.");
    }
    else{
        printf("This is odd number.");
    }
}

int main()

{
    int a;
    printf("Enter integer: ");
    scanf("%d", &a);
    even_or_odd(a);

    return 0;
}
