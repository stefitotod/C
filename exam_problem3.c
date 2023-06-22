/*    Ваш приятел, собственик на сервиз, Ви моли да създадете система, чрез която да управлява постъпилите автомобили за ремонт. 
      
      Задача 1. (30 т.)
      Създайте структура, която съхранява информация за постъпилите автомобили в сервиза. 
      Съхраняваната информация за всеки един автомобил е:
      ▪ Име на собственик (статичен низ с дължина 35 символа)
      ▪ Регистрационен номер автомобил (низ с фиксирана дължина и формат “AB1234CD“)
      ▪ Цена на ремонт (реално число с формат “0.00“)
      ▪ Приоритет (цяло число между 1 и 5)
      Създайте едномерен масив в който да съхранявате автомобилите. Създайте текстови файл с име “autoText.txt”
      Създайте функция, която: 
      • приема едномерен масив от тип структура автомобил
      • динамично разширява масива с един елемент
      • попълва елемента с информация, въведена от конзолата
      • записва елемента в текстовия файл с разделител ‘;’ и формат:
      “<дължина на низ име>;<низ име на собственик>;< низ рег. номер>;<цена>;<приоритет>”
      Пример: 4;Ivan;AB1234FF;123.45;1
      
      Задача 2. (30 т.)
      Създайте функция, която приема масив от автомобили, изчислява средно аритметичната цена 
      на ремонт, след което отпечатва на конзолата автомобилите с цена на ремонт над средно 
      аритметичната във формат “Регистрационен номер – Цена на ремонт”.
      
      Задача 3. (40 т.)
      Създайте функция, която приема регистрационен номер (низ с формат “AB1234CD“), след 
      което прочита информацията от вече създаден бинарен файл “auto.bin” и принтира данните за 
      автомобила на конзолата (име на собственик, цена на ремонт и приоритет). Данните в
      бинарния файл са организирани във формат: “<дължина на низ име><низ име><низ рег. номер><реално число цена><цяло число приоритет>” */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[36];
    char number[9];
    float price;
    int priority;
}autoo;

FILE *file;
autoo* autos;
unsigned count_autos = 0;

void add_auto(autoo autos[]){
    count_autos++;
    autos = realloc(autos, count_autos * sizeof(autoo));
    printf("Enter name: ");
    gets(autos[count_autos-1].name);
    printf("Enter number: ");
    scanf("%s", &autos[count_autos-1].number);
    printf("Enter price: ");
    scanf("%f", &autos[count_autos-1].price);
    printf("Enter priority: ");
    scanf("%d", &autos[count_autos-1].priority);

    fprinf(file, "%d;%s;%s;%f;%d\n", strlen(autos[count_autos-1].name),
                                     autos[count_autos-1].name,
                                     autos[count_autos-1].number,
                                     autos[count_autos-1].price,
                                     autos[count_autos-1].priority);
}

void average_price_fix(autoo autos[]){
    float average_price = 0;
    int i;

    for(i = 0; i < count_autos; i++){
        average_price += autos[i].price;
    }

    average_price /= count_autos;

    for(i = 0; i < count_autos; i++){
        if(average_price > autos[i].price){
            printf("%s - %f", autos[i].number, autos[i].price);
        }
    }

}

void print_from_binary(char number[]){
    autoo k;
    unsigned name_length;
    FILE* bin;
    bin = fopen("auto.bin", "rb");
    if(bin == NULL){
        exit(10);
    }

    while(!feof(bin)){
        fread = (&name_length, sizeof(name_length), 1, bin);
        fread = (k.name, sizeof(char), name_length+1, bin);
        fread = (k.number, sizeof(char), 9, bin);
        fread = (&k.price, sizeof(float), 1, bin);
        fread = (&k.priority, sizeof(int), 1, bin);

        if(!strcmp(k.number, number)){
            printf("Bin name: %s", k.name);
            printf("Bin L_Plate: %s", k.number);
            printf("Bin Price: %f", k.price);
            printf("Bin Priority: %d", k.priority);

        }
    }

    fclose(bin);
}

int main() {

    autos = calloc(1, sizeof(autoo));
    file = fopen("autoText.txt", "w");
    if(file == NULL){
        exit(4);
    }
    free(autos);
    fclose(file);

    return 0;
}
