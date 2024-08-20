#include <stdio.h>

int main ()

{
    int x, y;
    float media_aritmetica;

    printf("Inserisci x: ");
    scanf("%d", &x);
    printf("\nInserisci y: ");
    scanf("%d", &y);

    media_aritmetica = (float) (x+y)/2;

    printf("\nLa media aritmetica tra i due numeri e': %f\n\n", media_aritmetica);

    return 0;
}