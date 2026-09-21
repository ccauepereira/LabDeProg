#include <stdio.h>

int main() {
    int numero = 0, soma = 0, contador = 0;

    while (numero != -1) {
        scanf("%d", &numero);

        if (numero != -1) {
            if (numero >= 0 && numero <= 255) {
                soma += numero;
                contador++;
            }
        }
    }

    printf("Soma = %d\n", soma);
    printf("Quantidade = %d\n", contador);
    
    return 0;
}