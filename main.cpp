#include <stdio.h>
#include <stdlib.h>

int main() 
{
float conta, juros; 
int dias;

printf("\n Qual é o valor da conta?: ");
scanf("%f", &conta);

printf("\n Quantos dias de Atraso?: ");
scanf("%d", &dias);

juros = (conta * 0.02 * dias)/30;
conta = conta + juros;

printf("\nO valor a pagar será: R$ %.2f\n\n", conta);

getchar();
return 0;
}