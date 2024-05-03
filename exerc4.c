#include <stdio.h>
#include <stdlib.h>

void put(char *s) {
    while (*s != '\0') {
        printf("%c\n", *s);
        s++;
	system("pause");
    }
    printf("\n"); // Muda o cursor de linha
}

int main() {
    char palavra[60];

    printf("Digite uma palavra: ");
    gets(palavra);
    
    put(palavra);

    return 0;
}