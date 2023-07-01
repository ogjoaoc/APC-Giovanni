#include <stdio.h>

int main() 
{

int x;
int v[10];
int i;

scanf("%d", &x);
v[0] = x;

   for (i = 1; i < 10; i++) {
        v[i] = v[i - 1] * 2;
        
   }
    for (i = 0; i < 10; i++) {
   printf("N[%d] = %d\n", i, v[i]);
    }
    
return 0;

}
