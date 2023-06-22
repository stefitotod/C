// Трима спортни състезатели финишират за определен брой секунди между 1 и 50.
// Да се напише програма, която чете времената на състезателите, въведени от потребителя и пресмята сумарното им време във формат mm:ss. 

#include <stdio.h>

int main()
{
    int racer1, racer2, racer3;
    printf("Enter racer's time: ");
    scanf("%i %i %i", &racer1, &racer2, &racer3);

    int hours = 0;
    int minutes = 0;

    int total_seconds = racer1 + racer2 + racer3;

    hours = total_seconds / 60;
    minutes = total_seconds % 60;

    printf("Total time: %i:%i", hours, minutes);
    return 0;
}
