#include <stdio.h>

int main()

{
    int x, y;
    int moltiplicazione;

    printf("Inserisci x: ");
    scanf("%d", &x);
    printf("\nInserisci y: ");
    scanf("%d", &y);
    moltiplicazione = x * y;

    printf("\nLa moltiplicazione tra i due numeri e': %d\n\n", moltiplicazione);

    return 0;
}