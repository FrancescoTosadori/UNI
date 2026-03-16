//COMPLETA E CORREGGI A CASA

#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#define DIM 10;
/*
Si visualizzi una sequenza di 10 numeri naturali pseudo-casuali compresi tra 10 e 50. Si acquisisca da tastiera un intero n. Successivamente per ciascun intero x della sequenza si visualizzi il quoziente e il resto della divisione tra x e n. Per svolgere questo compito si definisca ed utilizzi una funzione che inizializza le variabili puntate da due dati puntatori con il quoziente e il resto della divisione tra due date variabili intere.
*/

void divisione(int vet, int n, float quoziente, int resto){
    quoziente = (float)vet / (float)n;
    resto = vet % n;
}

int main(void){
    srand(time(NULL));
    //Si visualizzi una sequenza di 10 numeri naturali pseudo-casuali compresi tra 10 e 50.
    int i,vet[10];
    for( i = 0; i < 10; i++){
        vet[i] = rand() % 41 +10;
        printf("%4d", vet[i]);
    }

    printf("\ninserire n\n");
    //Si acquisisca da tastiera un intero n.
    int n;
    scanf("%d", &n);

    //Successivamente per ciascun intero x della sequenza si visualizzi il quoziente e il resto della divisione tra x e n. Per svolgere questo compito si definisca ed utilizzi una funzione (divisione()) che inizializza le variabili puntate da due dati puntatori con il quoziente e il resto della divisione tra due date variabili intere.
    float quoziente;
    int resto;
    for( i = 0; i < 10; i++){
        divisione(vet[i], n, quoziente, resto);
        printf("%d / %n = %f resto %d", vet[i], n, quoziente, resto);
    }
}

