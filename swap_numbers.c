// Напишете функция за размяна на две числа.  Демонстрирайте работата й.

#include <stdio.h>

void swap(int *a, int *b)

{
   int c = *a;
   *a = *b;
   *b = c;
}

int main()

{
    
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("\nEnter b: ");
    scanf("%d", &b);
    swap(&a, &b);   
    printf("\na:%d \nb:%d", a, b);

    return 0;

}
