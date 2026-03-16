#include "stdio.h"
#include "time.h"
#include "stdlib.h"
//(fatto dal profe)
#define DIMR 5
#define DIMC 12

int main(void){

    srand(time(NULL));
    //tabella 5 righe x 12
    int mat[DIMR][DIMC];

    for(int i = 0; i < DIMR; i++){
        for(int j = 0; j < DIMC; j++){
            mat[i][j] = rand() % 81 - 40; //interi tra -40 e +40
            printf("%5d", mat[i][j]); //visualizza in un campo di 5 caratteri
        }
        printf("\n");
    }

    //Eseguiamo la somma di ogni elemento (non funziona (non so esattamente cosa dovrei sommare, nel dubbio in es_matrici_2.c c'è un problema simile risolto correttamente))
    int i, j, somma;
    for( i = 0; i < DIMR; i++){
        somma = 0;
        for( j = 0; j < DIMC; j++){
            somma += mat[j][i];
        }
        printf("Somma%d = %d\n", j, somma);
    }

    
    return 0;
}
