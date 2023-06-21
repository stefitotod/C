// Да се състави програма, чрез която се въвеждат 7 цели числа от интервала [-5000..5000] в едномерен масив. 
// Програмата да изведе числото, което е най-близко до средната стойност на въведените числа и къде се намира.
// Пример: 1,2,3,4,5,6,7
// Изход: средна стойност 4, най-близка стойност 4 на 4-то място

#include <stdio.h>
#include <math.h>

int num, x = 7, y = 0, sum = 0, i;
int myNumbers[];
float average_num;


int main() {
    while( x != 0){
        printf("Enter number from -5000 to 5000: ");
        scanf("%d", &num);
        if(( num >= -5000) & (num <= 5000)){
            myNumbers[y] = num;
            x--;
            y++;
        }
        else{
            printf("Sorry!");
        }
    }

    sum = myNumbers[0] + myNumbers[1] + myNumbers[2] + myNumbers[3] + myNumbers[4] + myNumbers[5] + myNumbers[6]; //1,2,3,4,5,6,7
    average_num = sum / 7;
    printf("Average number: %f\n", average_num); // 28/7 = 4

    int nums[7];
    int a;
    for(i = 0; i < 7; i++){
        a = fabs(average_num - myNumbers[i]); // 3,2,1,0,1,2,3
        nums[i] = a;
    }

    double cl_num = nums[0]; //  float , 3
    int cl_index_num = 0;
    i = 1;
    for(i; i < 7; i++){
        if(nums[i] < cl_num){
            cl_num = nums[i]; // 0
            cl_index_num = i; //3
        }
    }

    // printf("Cl.num: %d\n", cl_num);
    // printf("Cl.index: %d\n", cl_index_num);

    printf("num closest to avg: %d\n", myNumbers[cl_index_num]);
    printf("Place: %d\n", cl_index_num + 1);

    return 0;
}

