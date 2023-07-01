#include <stdio.h>

int main() {

    double numero_digitado; // variavel para armazenar cada numero digitado
    int contador_notas_validas; // variavel para contar as notas validas
    double soma;

    // Inicialiar o contador
    contador_notas_validas = 0;
    soma = 0;
    do { 
        
        scanf("%lf", &numero_digitado);

            if (numero_digitado >= 0 && numero_digitado <= 10) {
            contador_notas_validas++;
            soma = soma + numero_digitado;
            } else {
                printf("nota invalida\n");
            }

    } while (contador_notas_validas < 2);

    printf("media = %.2lf\n", soma/2);


}
