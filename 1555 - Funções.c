#include <stdio.h>
#include <math.h>

int pontuacaoRafael(int x, int y) {
    return pow(3*x, 2) + pow(y, 2);
}

int pontuacaoBeto(int x, int y) {
    return 2*(pow(x, 2)) + pow(5*y, 2);
}

int pontuacaoCarlos(int x, int y) {
    return -100*x + pow(y, 3);
}

void main () {

    int x, y, rafael, beto, carlos;
    unsigned casos;

    scanf("%u", &casos);

    while (casos--) {

        scanf("%d %d", &x, &y);

        rafael = pontuacaoRafael(x, y);
        beto = pontuacaoBeto(x, y);
        carlos = pontuacaoCarlos(x, y);

        if (rafael > beto && rafael > carlos)
            printf("Rafael ganhou\n");
        else if (beto > rafael && beto > carlos)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");

    }

}
