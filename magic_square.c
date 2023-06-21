// Направете програма, която проверява дали един квадрат е магически (сумите на числата във всички редове и колони да е равна на едно и също число). 

#include <stdio.h>

int main() {
    int myNumbers[3][3];
    int size = 3;
    int i, j = 0;
    int sum1, sum2, sum3;
    int k = 0;

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
    sum1 = 0;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (i == j)
            sum1 = sum1 + myNumbers[i][j];
      }
   }
   for (i = 0; i < size; i++) {
      sum2 = 0;
      for (j = 0; j < size; j++) {
         sum2 = sum2 + myNumbers[i][j];
      }
      if (sum1 == sum2)
         k = 1;
      else {
         k = 0;
         break;
      }
   }
   for (i = 0; i < size; i++) {
      sum3 = 0;
      for (j = 0; j < size; j++) {
         sum3 = sum3 + myNumbers[j][i];
      }
      if (sum1 == sum3)
         k = 1;
      else {
         k = 0;
         break;
      }
   }

   if (k == 1)
      printf("\nMagic square!!!");
   else
      printf("\nNo Magic square!!!");

   return 0;
}
