int main() {
    int n, j=0, tamanhoLado = 1, coordenadaX = 0, coordenadaY = 0, operacao = 1, orientacao = -1;
    scanf("%d", &n);

    for (int i =0; i < n; i++) {

        if (orientacao < 0) { // orientacao negativa opera-se sobre a coordenada Y e positiva sobre a coordenada X
            coordenadaY += operacao;
        }
        else {
            coordenadaX -= operacao;
        }

        j++;

        if (j == tamanhoLado) { // caso j seja do tamanho do lado, zera-se o j e troca a orientacao
            j = 0;
            orientacao *= -1;
            if (orientacao < 0) { //quando a orientacao passa a ser do Y, o tamanho do lado aumenta
                tamanhoLado++;
                operacao = tamanhoLado % 2 == 0 ? -1 : 1; // caso o tamanho do lado seja par, adiciona-se na coordenada X e subtrai-se na coordenada Y e vice-versa
            }
        }
    }

    printf("( %d, %d )\n", coordenadaX, coordenadaY);

    return 0;
}
