# Да се прочетат от клавиатурата 3 числа и да се изведе на екрана най-малкото от тях. 

#include <stdio.h>

int main()
{
    int a, b, c;
    int big_num = 0;
    printf("Enter integer: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a > big_num)
    {
        big_num = a;
    }
    if(b > big_num)
    {
        big_num = b;
    }
    if(c > big_num)
    {
        big_num = c;
    }

    printf("%d", big_num);

    return 0;

}
