#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calcularExpressao(float valor1, float valor2, char operador) {
    switch (operador) {
        case '+':
            return valor1 + valor2;
        case '-':
            return valor1 - valor2;
        case '*':
            return valor1 * valor2;
        case '/':
            if (valor2 != 0) {
                return valor1 / valor2;
            } else {
                printf("Erro: Divisao por zero.\n");
                exit(EXIT_FAILURE);
            }
        default:
            printf("Erro: Operador invalido.\n");
            exit(EXIT_FAILURE);
    }
}

int main() {
    char entrada[100];
    float valor1, valor2, resultado;
    char operador;

    printf("Digite a expressao aritmetica no formato CALC <valor> <operador> <valor>: ");
    fgets(entrada, sizeof(entrada), stdin);

    char *token = strtok(entrada, " ");
    if (token != NULL && strcmp(token, "CALC") == 0) {
        token = strtok(NULL, " ");
        valor1 = atof(token);
        
        token = strtok(NULL, " ");
        operador = token[0];
        
        token = strtok(NULL, " ");
        valor2 = atof(token);

        resultado = calcularExpressao(valor1, valor2, operador);

        printf("Resultado: %.2f\n", resultado);
    } else {
        printf("Erro: Formato de entrada invalido.\n");
    }

    return 0;
}