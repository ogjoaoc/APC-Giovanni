#include <stdio.h>

void sequencia(int N) {
    int v1 = 1;
    for (int i = 0; i < N*2; i++) {
        printf("%d %d %d\n", v1, v1*v1 + (i%2), v1*v1*v1 + (i%2));
        v1 += (i%2);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    sequencia(N);
    return 0;
}
