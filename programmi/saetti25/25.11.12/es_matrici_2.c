#include "stdio.h"
#include "stdlib.h"
#include "time.h"

#define DIMR 5
#define DIMC 12

int main(void){
    srand(time(NULL));
    //tabella di 5 righe per 12 di interi compresi tra -20 e +80, visualizzare.
    int i,j, mat[DIMR][DIMC];

    for( i = 0; i < DIMR; i++){
        for( j = 0; j < DIMC; j++){
            mat[i][j] = rand() % 101 - 20;
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }

    //Somma degli interi per ciascuna colonna della tabella
    int somma;
    for( j = 0; j < DIMC; j++){
        somma = 0;
        for( i = 0; i < DIMR; i++){
            somma = somma + mat[i][j];
        }
        printf("Somma%d = %d\n", j, somma);
    }

    //Media di ogni intero positivo in ogni colonna
    int n = 0;
    for( j = 0; j < DIMC; j++){
        somma = 0;
        n = 0;
        for( i = 0; i < DIMR; i++){
            if(mat[i][j] > 0){
                somma = somma + mat[i][j];
                n++;
            }
        }
        printf("Media%d = %d\n", j, somma / n);
    }
    return 0;
}
