/*	Дадено е едно цяло число- брой точки. Върху него се начисляват  бонус точки по правилата, описани по-долу. 
    Да се напише програма, която пресмята бонус точките за това число и общия брой точки с бонусите.
    1) Ако числото е до 100 вклю. бонус точките са 5.
    2) Ако числото е по-голямо от 100 бонус точките са 20%.
    3) Ако числото е по-голямо от 1000 бонус точките са 10%.
    4) Допълнителни бонус точки  (отделни от преходните):
    - за четно число +1точка.
    - за число, което завършва на пет +2точки. */

#include <stdio.h>

int main()
{
    int num;
    printf("Enter integer: ");
    scanf("%i", &num);
    int bonus = 0;
    int bonus_plus = 0;

    if(num <= 100){
        bonus += 5;
    }
    else if(num > 100){
        bonus = num*0.2;
    }
    else if(num > 1000){
        bonus = num*0.1;
    }

    if(num % 2 == 0){
        bonus_plus += 1;
    }
    if(num % 10 == 5){
        bonus_plus += 5;
    }

    int total_points = num + bonus + bonus_plus;
    int total_bonus = bonus + bonus_plus;

    printf("Total points:%i" , total_points);
    printf("\nTotal bonus:%i", total_bonus);

    return 0;
}
