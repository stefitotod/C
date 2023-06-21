// Да се напише програма, при която се въвеждат две числа N и К. 
// След това се въвеждат още N числа и се извежда броят на числата, които са по-големи от K и се делят на 3. 

#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter n and k: ");
    scanf("%d %d", &n, &k);
    int num;
    int number = 0;

    while(n > 0){
        scanf("%d", &num);
        --n;
        if(num > k && num % 3 == 0){
           number += 1;
        }
    }
    printf("%d", number);
    return 0;
}

