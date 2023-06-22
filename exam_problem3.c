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
