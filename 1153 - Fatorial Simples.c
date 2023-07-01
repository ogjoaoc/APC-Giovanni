#include <stdio.h>
 
int main() {

    int fatorial; 
    int numero;
    int i; 

    scanf("%d", &numero);

     fatorial = numero;
        
    for ( i = numero-1; i >= 1; i--) {
        fatorial = fatorial * i;

    }

    printf("%d\n", fatorial);



}
