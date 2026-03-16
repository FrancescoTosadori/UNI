//10 righe 12 colonne con interi da -50 a 50. Visualizza somma di interi su ogni riga usando una funzione.

#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define DIMR 10
#define DIMC 12

int somma_righe_positivi(const /*protegge la variabile*/ int vettore[], int n){
    int i, somma = 0;
    for(i = 0; i < n; i++){
        if(vettore[i] > 0){
            somma += vettore[i];
        }
    }
    return somma;
}

int somma_righe_negativi(const /*protegge la variabile*/ int vettore[], int n){
    int i, somma = 0;
    for(i = 0; i < n; i++){
        if(vettore[i] < 0){
            somma += vettore[i];
        }
    }
    return somma;
}


int main(void){
    srand(time(NULL));
    int i, j, matrice[DIMR][DIMC];
    
    for( i = 0; i < DIMR; i++){
        for( j = 0; j < DIMC; j++){
            matrice[i][j] = rand() % 101 -50;
            printf("%4d", matrice[i][j]);
        }
        printf("\n");
    }

    for( i = 0; i < DIMR; i++){
        printf("Somma elementi riga %d: %d\n", i + 1, somma_righe_positivi(matrice[i], DIMC));
    }

    for( i = 0; i < DIMR; i++){
        printf("Somma elementi neg riga %d: %d\n", i + 1, somma_righe_negativi(matrice[i], DIMC));
    }

    return 0;
}
