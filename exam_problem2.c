#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE* file;

typedef struct {
  char name[56];
  char number[7];
  float price;
  int code;
}member;

member* members;
unsigned count;

void add_member(member members){
  count++;
  members = realloc(members, count*sizeof(member));
  printf("Enter name: ");
  scanf("%s", &members[count-1].name);
  fflush(stdin);
  printf("\nEnter number: ");
  scanf("%s", &members[count-1].number);
  fflush(stdin);
  printf("\nEnter price: ");
  scanf("%f", &members[count-1].price);
  flush(stdin);
  printf("\nEnter code: ");
  scanf("%d", &members[count-1].code);
  flush(stdin);

  fprintf(file, "%s;%s;%s;%f;%d", strlen(members[count-1].name),
                                  members[count-1].name,
                                  members[count-1].number,
                                  members[count-1].price,
                                  members[count-1].code);
}

void average_price(member members[]){
    unsigned aver_price = 0;
    int i;

    for(i = 0; i < count; i++){
        aver_price += members.price;
    }
    aver_price /= count;

    for(i = 0; i < count; i++){
        if(members[i].price < aver_price){
            printf("%s - %s - %f", members[i].name, members[i].number, members[i].price);
        }
    }


}

void print_member(char number[]){
    unsigned name_length;
    member m;
    FILE* bin;
    bin = fopen("members.bin", "rb");
    if(bin == NULL){
        exit(9);
    }
    while(!feof(bin)){
        fread = (&m.name_length, sizeof(name_length), 1, bin);
        fread = (m.name, sizeof(char), name_length+1 , bin);
        fread = (m.number, sizeof(char), 7, bin);
        fread = (&m.price, sizeof(float), 1, bin);
        fread = (&m.code, sizeof(int), 1, bin);

        if(!strcmp(number, m.number)){
            printf("\nBin name: %s", m.name);
            printf("\nBin ID: %s", m.number);
            printf("\nBin M_Price: %f", m.price);
            printf("\nBin Locker: %d", m.code);
            break;
        }
    }
    fclose(bin);
}


int main(){

  members = calloc(1, sizeof(member));
  file = fopen("membersText.txt", "w");
  if(file == NULL){
    exit(5);
  }
  add_member(members);
  add_member(members);
  average_price(members);
  free(members);
  print_member("AA12343");
  fclose(file);
  return 0;
}

