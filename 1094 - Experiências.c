#include <stdio.h>

void gerar_saida(int total, int c, int r, int s) {
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (float)c / total * 100);
    printf("Percentual de ratos: %.2f %%\n", (float)r / total * 100);
    printf("Percentual de sapos: %.2f %%\n", (float)s / total * 100);
}

int main() {
    int n, i, quantia, total = 0, c = 0, r = 0, s = 0;
    char tipo;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d %c", &quantia, &tipo);

        total += quantia;

        switch (tipo) {
            case 'C':
                c += quantia;
                break;
            case 'R':
                r += quantia;
                break;
            case 'S':
                s += quantia;
                break;
        }
    }
    
     gerar_saida(total, c, r, s);

    return 0;

}
