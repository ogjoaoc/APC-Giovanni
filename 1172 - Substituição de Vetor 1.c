#include <stdio.h>

int main() 
{

int v[10];
int i;

for (i = 0; i <= 9; i++) {
    scanf("%d", &v[i]);  
}

for (i = 0; i <= 9; i++) {
    if (v[i] <= 0) v[i] = 1; }

for (i = 0; i <= 9; i++) {
    printf("X[%d] = %d\n", i, v[i]);
}

}
