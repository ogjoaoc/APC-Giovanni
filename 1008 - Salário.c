#include <stdio.h>
 
int main() {


int ID, horas;
float valor;
float salario;

scanf("%d %d %f", &ID, &horas, &valor);
salario = (horas * valor);

printf ("NUMBER = %d\n", ID);
printf ("SALARY = U$ %.2f\n", salario);
 
    return 0;
}
