#include<stdio.h>

int main() {
    int n, i = 0, tamanhoLado = 1, coordenadaX = 0, coordenadaY = 0, operacao;
    scanf("%d", &n);

    while ( i < n ) {

        operacao = tamanhoLado % 2 == 0 ? -1 : 1;

        for (int j = 0; i < n && j < tamanhoLado; j++) {
            coordenadaY += operacao;
            i++;
        }

        for (int j = 0; i < n && j < tamanhoLado; j++) {
            coordenadaX -= operacao;
            i++;
        }

        tamanhoLado++;
    }

    printf("( %d, %d )\n", coordenadaX, coordenadaY);

    return 0;
}
