/*
Riempire una sequenza con 10 interi acquisiti da tastiera e successivamente visualizzare per ciascun intero pari x maggiore di 2 nella sequenza la coppia di numeri primi la cui somma è uguale ad x. Per svolgere questo compito si definiscano ed utilizzino due funzioni C con le seguenti finalità:
    Produrre 1 se un dato intero è primo e produrre 0 altrimenti.
    Inizializzare gli interi puntati da due dati puntatori a variabile intera con i due numeri primi la cui somma è pari ad un dato intero.
*/
#include "stdio.h"

#define DIM 3

//Produrre 1 se un dato intero è primo e produrre 0 altrimenti.
int Primo(int n){
    int i, divisori = 1;
    for (i = 2; i < n; i++){
        if (n % i != 0) divisori++;
    }
    if (divisori == 2) return 1;

    return 0;
}

//Inizializzare gli interi puntati da due dati puntatori a variabile intera con i due numeri primi la cui somma è pari ad un dato intero.
void sommaInPrimi(int *primo1, int *primo2, int n){
    int i, j;
    *primo1 = 0;
    *primo2 = 0;
    for (i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i + j == n && Primo(i) && Primo(j)){
                *primo1 = i;
                *primo2 = j;
            }
        }
    }
}

int main(void){
    int sequenza[DIM], i;

    for (i = 0; i < DIM; i++){
        printf("\n==>");
        scanf("%d", &sequenza[i]);
    }

    int primo1, primo2;
    for (i = 0; i < DIM; i++){
        sommaInPrimi(&primo1, &primo2, sequenza[i]);
        if(primo1 != 0 && primo2 != 0){
            printf("\n%d è la somma di: %d e %d", sequenza[i], primo1, primo2);
        }
        else{
            printf("\n%d non è somma di due primi", sequenza[i]);
        }
    }

    printf("\n");
    return 0;
}