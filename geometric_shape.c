/* Да се напише програма, в която се въвежда цяло число, което представлява код на геометрична фигура
   – 1 – квадрат, 2 – правоъгълник, 3 – правоъгълен триъгълник, 4 – окръжност.
   След това се въвеждат размерите на избраната геометрична фигура. Програмата трябва да изведе типа на геометричната фигура, както и нейното лице. 
   За пресмятането на лицето да се напишат подходящи функции. */

#include <stdio.h>

int square(int a){
    return a*a;
}

int rectangle(int a, int b){
    return a*b;
}

float triangle(int a, int b){
    return a*b/2.0;
}

float circle(int a){
    return 3.14*a*a;
}

int main() {
    int choice, side, length, width, base, height, radius;
    float area;
    printf("Input 1 for area of square\n");
    printf("Input 2 for area of rectangle\n");
    printf("Input 3 for area of right triangle\n");
    printf("Input 4 for area of circle\n");
    printf("Input your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Input the side of the square: ");
            scanf("%d", &side);
            printf("%d", square(side));
            break;
        case 2:
            printf("Input the length and width of the rectangle : ");
            scanf("%d %d", &length, &width);
            printf("%d", rectangle(length, width));
            break;
        case 3:
            printf("Input the base and height of the triangle :");
            scanf("%d %d", &base, &height);
            printf("%f", triangle(base, height));
            break;
        case 4:
            printf("Input the radius of the circle: ");
            scanf("%d", &radius);
            printf("%f", circle(radius));
            break;
        default:
            printf("Sorry");
    }

    return 0;
}
