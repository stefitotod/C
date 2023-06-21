// Попълнете масив NxN елемента и го попълнете с числа. 
// -	Изкарайте елементите на главния диагонал
// -	Изкарайте елементите на второстепенния диагонал
// -	Изведете елементите над главния диагонал
// -	Изведете елементите под главния диагонал

#include <stdio.h>

int main() {
    int myNumbers[3][3];
    printf("Enter 9 integers: ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           scanf("%d", &myNumbers[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
           printf("%d\t", myNumbers[i][j]);
        }
        printf("\n");
    }
    printf("The primary diagonal is:\n");
    for(int i = 0; i < 3; i++){
        printf("%d\n", myNumbers[i][i]);
    }
    printf("The secondary diagonal is:\n");
    for(int i = 0; i < 3; i++){
        printf("%d\n", myNumbers[i][3-i-1]);
    }
    printf("The upper triangular is:\n");
    printf("%d\t", myNumbers[0][1]);
    printf("%d\n", myNumbers[0][2]);
    printf("\t%d", myNumbers[1][2]);

    printf("\nThe lower triangular is:\n");
    printf("\t%d\n", myNumbers[1][2]);
    printf("%d\t", myNumbers[2][1]);
    printf("%d\t", myNumbers[2][2]);
return 0;
}
