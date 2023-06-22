/* Студент трябва да пътува х километра. Той има избор между три вида транспорт. 
   1)	Такси- начална такса 0.70. Дневна тарифа 0.79лв/км. 
      Нощна 0.90лв/км.
   2)	Автобус дневна и нощна тарифа- 0.09 лв/км. 
      Може да се използва за разстояние минимум 20 км.
   3)	Влак  дневна и нощна тарифа- 0.06 лв/км. 
      Може да се използва за разстояние минимум 100 км.
   Напишете програма, която чете броя километри х и периода от деня и изчислява вида и цената на най-евтиния транспорт. */
   
   #include <stdio.h>

int main()
{
    int km_day, km_night;
    printf("Enter km_day and km_night: ");
    scanf("%i %i", &km_day, &km_night);

    float total_taxi_price, taxi_km_day, taxi_km_night;
    #define taxi_start 0.70
    const float taxi_day = 0.79;
    const float taxi_night = 0.90;

    taxi_km_day = km_day * taxi_day + taxi_start;
    taxi_km_night = km_night * taxi_km_night +taxi_start;
    total_taxi_price = taxi_km_day + taxi_km_night;

    printf("Total price for taxi is:%f", total_taxi_price);

    if(km_day + km_night > 20){
        float total_bus_price;
        #define bus_km_day_night_price 0.09
        total_bus_price = (km_day * bus_km_day_night_price) + (km_night * bus_km_day_night_price);

        printf("\nTotal price for bus is:%f", total_bus_price);
    }

    if(km_day + km_night > 100){
        float total_train_price;
        #define train_km_day_night_price 0.06
        total_train_price = (km_day * train_km_day_night_price) + (km_night * bus_km_day_night_price);
        printf("\nTotal price for train is:%f", total_train_price);

    }

    return 0;
}

