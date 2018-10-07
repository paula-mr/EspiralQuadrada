#include<stdio.h>

int main() {
    int n, i = 0, tamanhoLado = 1, coordenadaX = 0, coordenadaY = 0;
    scanf("%d", &n);

    while ( i < n ) {
        for (int j = 0; i < n && j < tamanhoLado; j++) {
            if (tamanhoLado % 2 == 0) {
                coordenadaY -= 1;
            }
            else {
                coordenadaY += 1;
            }
            i++;
        }

        for (int j = 0; i < n && j < tamanhoLado; j++) {
            if (tamanhoLado % 2 == 0) {
                coordenadaX += 1;
            }
            else {
                coordenadaX -= 1;
            }
            i++;
        }

        tamanhoLado++;
    }

    printf("( %d, %d )\n", coordenadaX, coordenadaY);

    return 0;
}
