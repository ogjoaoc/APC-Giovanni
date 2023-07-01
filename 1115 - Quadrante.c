#include <stdio.h>
 

int quadrante (int x, int y) {
    if (x == 0 || y == 0) {
        return 0;
        
    }
    
    if (x > 0) {
        if (y > 0) {
            return 1;
        } else {
            return 2;
        }
    } else if (x < 0) {
        if (y > 0) {
            return 3;
        } else {
            return 4;
        }

    }


}

int main() {
    int x, y;
    while(1) {

    scanf("%d %d", &x, &y);
    if (x == 0 || y == 0) {
            break; }

printf("%s\n",          (quadrante(x, y) == 1 ? "primeiro" :
                         (quadrante(x, y) == 2 ? "quarto" :
                          (quadrante(x, y) == 3 ? "segundo" :
                           (quadrante(x, y) == 4 ? "terceiro" : "")))));
    }
    return 0;
}
