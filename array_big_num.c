// Да се състави програма, чрез която се въвеждат 7 цели числа от интервала [-5000..5000] в едномерен масив. Програмата да изведе най-голямото от въведените числа.
// Пример: 89, -123, 45, 196, 1204, 0, 112
// Изход: 1204

#include <stdio.h>

int num, i, x = 7, y = 0, biggest = 0;
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

    for(i = 0; i < 7; i++){
        if(myNumbers[i] > biggest){
            biggest = myNumbers[i];
        }
    }

    printf("The biggest number is: %d", biggest);
    return 0;
}

