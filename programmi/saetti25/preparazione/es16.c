#include <stdio.h>

int potenza(int base, int esponente){
    int i, risultato = 1;
    for (i = 1; i < esponente; i++) risultato *= base;
    return risultato;
}

void potenza_max(int base, int roof, int *pot, int*esp){
    int i;
    for (i = 0; potenza(base,i + 1) < roof; i++);
    *esp = i-1;
    *pot = potenza(base, *esp);
}

int main(void){
    int n, i , potenza, esponente;

    printf("8=>");
    scanf("%d",&n);

    for (i = 1; i <= 1000; i++){
        potenza_max(n, i, &potenza, &esponente);
        printf(
                "la prima potenza di %d inferiore a %d è %d^%d=%d\n",
                n,
                i,
                n,
                esponente,
                potenza
              );
    }

    return 0;
}
