#include<stdio.h>
#include<math.h>

struct Pontos {
    int coordenadaX;
    int coordenadaY;
};

typedef struct Pontos Ponto;

Ponto encontraCoordenadasQuadradoPerfeito(int n);
int encontraQuadradoPerfeitoAnterior(int n);
int ehQuadradoPerfeito(int n);

int main() {
    int n, operacao, quadradoPerfeitoAnterior, diferencaNAnterior;
    Ponto ponto, coordenadaQuadradoPerfeitoAnterior;

    scanf("%d", &n);


    if (!ehQuadradoPerfeito(n)) {
        quadradoPerfeitoAnterior = encontraQuadradoPerfeitoAnterior(n);
        coordenadaQuadradoPerfeitoAnterior = encontraCoordenadasQuadradoPerfeito(quadradoPerfeitoAnterior);
        diferencaNAnterior = n - quadradoPerfeitoAnterior;
        operacao = quadradoPerfeitoAnterior % 2 == 0 ? 1 : -1;

        if (diferencaNAnterior > sqrt(quadradoPerfeitoAnterior)) {
            ponto.coordenadaX =  coordenadaQuadradoPerfeitoAnterior.coordenadaX + (operacao * (int) sqrt(quadradoPerfeitoAnterior));
            diferencaNAnterior -= (int) sqrt(quadradoPerfeitoAnterior);
        }
        else {
            ponto.coordenadaX = coordenadaQuadradoPerfeitoAnterior.coordenadaX + (operacao * diferencaNAnterior);
            diferencaNAnterior = 0;
        }

        ponto.coordenadaY = coordenadaQuadradoPerfeitoAnterior.coordenadaY + (operacao * diferencaNAnterior);

    }
    else {
        ponto = encontraCoordenadasQuadradoPerfeito(n);
    }

    printf("( %d, %d )    \n", ponto.coordenadaX, ponto.coordenadaY);

    return 0;
}

int encontraQuadradoPerfeitoAnterior(int n) {
    int raizInteira = (int)sqrt(n);
    return raizInteira*raizInteira;
}

int ehQuadradoPerfeito(int n) {
    int raizInteira = (int)sqrt(n);

    return raizInteira*raizInteira == n;
}

Ponto encontraCoordenadasQuadradoPerfeito(int n) {
    Ponto ponto;
    int raizInteira;

    if (n%2 == 0) {
        raizInteira = (int)sqrt(n);
        ponto.coordenadaX = - (raizInteira/2);
        ponto.coordenadaY = ponto.coordenadaX;
    }
    else {
        raizInteira = (int)sqrt(n);
        ponto.coordenadaX = (raizInteira-1)/2;
        ponto.coordenadaY = (raizInteira+1)/2;
    }

    return ponto;
}
