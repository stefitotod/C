// Да се състави програма, чрез която се въвеждат 7 цели числа от интервала [-5000..5000] в едномерен масив. Програмата да изведе общата сума на въведените числа.
// Пример: 89, -123, 45, 196, 1204, 0, 112
// Изход: 1523

#include <stdio.h>

int x = 7, num, y = 0, sum = 0;
int myNumbers[];

int main() {
    while( x != 0){
        printf("Enter number from -5000 to 5000: ");
        scanf("%d", &num);
        if(( num >= -5000) && (num <= 5000)){
            myNumbers[y] = num;
            x--;
            y++;
        }
        else{
            printf("Sorry!");
        }
    }

    sum = myNumbers[0] + myNumbers[1] + myNumbers[2] + myNumbers[3] + myNumbers[4] + myNumbers[5] + myNumbers[6];
    printf("%d", sum);

    return 0;
}
