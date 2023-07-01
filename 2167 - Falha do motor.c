#include <stdio.h>

int main(void) {

int N;
scanf("%d", &N);
int i;
int posicao = 0;
int v[N];

for (i=0; i < N; i++) {
    scanf("%d", &v[i]);
}

for (i=1; i < N; i++) {
    if (v[i] < v[i - 1]) {
        posicao = i + 1;
        break;
    }
    
}

printf("%d\n", posicao);

}
