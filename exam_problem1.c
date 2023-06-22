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

