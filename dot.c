// Съставете структура за точка в пространството. 
// Попълнете точките с данни. 
// Направете триъгълник със зададените точки и намерете страните на триъгълника.

#include <stdio.h>
#include <math.h>

struct Dot {
    int x;
    int y;
};

int main() {

    int a, b, c;

    struct Dot first;
    struct Dot second;
    struct Dot third;

    printf("Enter dot- first:\n");
    scanf("%d%d", &first.x, &first.y);

    printf("Enter dot- second:\n");
    scanf("%d%d", &second.x, &second.y);

    printf("Enter dot- third:\n");
    scanf("%d%d", &third.x, &third.y);

    a = sqrt(((first.x - second.x)*(first.x - second.x))*((first.y - second.y)*(first.y - second.y)));
    b = sqrt(((first.x - third.x)*(first.x - third.x))*((first.y - third.y)*(first.y - third.y)));
    c = sqrt(((second.x - third.x)*(second.x - third.x))*((second.y - third.y)*(second.y - third.y)));

    printf("\nA: %d", a);
    printf("\nB: %d", b);
    printf("\nC: %d", c);

    return 0;
}
