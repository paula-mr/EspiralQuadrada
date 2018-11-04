#include<stdio.h>

int main() {
    int n, tamanhoLado = 1, coordenadaX = 0, coordenadaY = 0, resto, operacao;
    //scanf("%d", &n);

    for (int j=0; j< 37; j++) {
        int i = 0;
        resto = j;
        tamanhoLado = 1;
        coordenadaX = 0;
         coordenadaY = 0;
         printf("n: %d  ", j);
        while ( resto > 0 ) {

            operacao = tamanhoLado % 2 == 0 ? -1 : 1;

            if (tamanhoLado < resto) {
                coordenadaY += operacao * tamanhoLado;
                resto -= tamanhoLado;
            }
            else {
                coordenadaY += operacao * resto;
                resto = 0;
            }

            if (tamanhoLado < resto) {
                coordenadaX -= operacao * tamanhoLado;
                resto -= tamanhoLado;
            }
            else {
                coordenadaX -= operacao * resto;
                resto = 0;
            }

            i++;
            tamanhoLado++;

            if (resto < tamanhoLado) {
                operacao = tamanhoLado % 2 == 0 ? -1 : 1;
                coordenadaY += operacao * resto;
                resto = 0;
            }

        }


        printf("( %d, %d )    ", coordenadaX, coordenadaY);
        printf("i: %d\n",i);
    }

    return 0;
}

