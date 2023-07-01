#include <stdio.h>
#include <math.h> 

int main()
{
    double A, B, C, delta, r1, r2;
    scanf("%lf %lf %lf", &A, &B, &C);

    if(((B*B) - 4 * A * C) < 0 || A == 0) {
        printf("Impossivel calcular\n");
    }

    else 

    {
        delta = sqrt((B * B) - 4 * A * C);
        r1 = ((-B +delta) / (2*A));
        r2 = ((-B -delta) / (2*A));
        printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
    }
    return 0;
}
