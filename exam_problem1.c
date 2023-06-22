/*   Ваш приятел, собственик на клиника за домашни любимци, Ви моли да създадете система, чрез която да управлява пациентите си.

     Задача 1. (30 т.)
     Създайте структура, която съхранява информация за постъпилите любимци в клиниката. 
     Съхраняваната информация за всеки един пациент е:
     ▪ Име на собственик (статичен низ с дължина 30 символа)
     ▪ Номер на чип (низ с фиксирана дължина и формат “A12345B“)
     ▪ Цена за преглед (реално число с формат “0.00“)
     Създайте едномерен масив в който да съхранявате пациентите. Създайте текстови файл с име “animalsText.txt”. Създайте функция, която не приема параметри и: 
     • Създава един елемент от тип структура пациенти и попълва атрибутите на елемента с 
     информация, въведена от конзолата
     • Записва в текстови файл “Име на собственик” и “Цена за преглед” разделени със “,”(запетая).
     Пример: Stoyan Ivanov,45.50
     Функцията връща създадения елемент.
     
     Задача 2. (30 т.)
     Създайте функция, която приема масив от тип структура пациенти, размер на масива и цена за 
     преглед. Функцията отпечатва на конзолата името на собственика и номера на чипа свързани с 
     подадената цена за преглед. Ако не е открит такъв запис в масива – отпечатва съответното съобщение.
     *Приемете, че масива е вече създаден и попълнен с данни
     
     Задача 3. (40 т.)
     Създайте функция, която приема като параметър “цена за преглед” (реално число с формат 
     “0.00“), след което прочита информацията от бинарен файл “animalsBin.bin” и принтира всички 
     пациенти с цена за преглед равна или по-голяма от подадената като параметър. 
     Данните в бинарния файл са записани във формат: “<дължина на низ име на собственик><низ име на собственик><номер на чип><цена за преглед>”.
     *Приемете, че бинарният файл е вече създаден и попълнен с данни, като е необходимо само да го достъпитe.    */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* file;

typedef struct{
    char name[31];
    char number[8];
    float price;
}animal;

animal input(void){
    animal animals;
    printf("Enter name: ");
    fgets(animals.name, 31, stdin);
    animals.name[strlen(animals)-1] = '\0';
    printf("Enter number: ");
    fgets(animals.number, 8, stdin);
    printf("Enter price: ");
    scanf("%f", animals.price);
    fflush(stdin);

    fprintf(file, "%s , %f", animals.name, animals.price);

    return animals;
}

void print_information(animal* animals, unsigned count, float price){
    while(--count >= 0){
            if(animals[count].price == price){
                printf("%s - %s", animals[count].name, animals[count].number);
            }
            else{
                printf("Sorry");
            }
    }

}

void print(float price){
    unsigned name_length;
    animal m;
    FILE* bin;
    bin = fopen("animalsBin.bin", "rb");
    if(bin == NULL){
        exit(7);
    }
    while(!feof(bin)){
        fread(&m.name_length, sizeof(name_length), name_length, bin);
        fread(m.name, sizeof(char), name_length+1, bin);
        fread(m.number, sizeof(char), 1, bin);
        fread(&m.price, sizeof(float), 1, bin);

        if(m.price >= price){
            printf("Bin OwnerName: %s", m.name);
            printf("\n Bin Chip: %s", m.name);
            printf("\nBin price: %f", m.price);
        }
   }
   fclose(bin);
}

int main(){
    animal animals[100];
    file = fopen("animals.Txt", "w");
    if(file == NULL){
        exit(4);
    }
    animals[0] = input();
    print_information(animals, 34, 4.55);
    fclose(file);
    return 0;
}

