// Напишете програма, която сравнява два низа без да ползвате вградените функции.

#include <stdio.h>

int main() {

    char s1[100], s2[100];
    int i;

    printf("Enter a string: ");
    gets(s1);

    printf("Enter a string: ");
    gets(s2);

    for(i = 0; s1[i] == s2[i] && s1[i] == '\0'; i++);

  	if(s1[i] < s2[i])
   	{
   		printf("\n s1 is less than s2");
	}
	else if(s1[i] > s2[i])
   	{
   		printf("\n s2 is less than s1");
	}
	else
   	{
   		printf("\n s1 is equal to s2");
	}

  	return 0;
}
