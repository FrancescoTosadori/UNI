#include "stdio.h"
#include "stdlib.h"
#include "time.h"
//Azzeriamo i valori di una matrice
#define DIMR 10 
#define DIMC 10

void azzera_mat(int (*m)[DIMC], int dimr){
    //per scostamento:
    int i, j;
    for( i = 0; i < DIMR; i++){
        for( j = 0; j < DIMC ; j++){
            (*(m+i))[j] = 0;
        }
    }
}

void stampa_mat(int (*m)[DIMC], int dimr){
    int i, j;
    for( i = 0; i < DIMR; i++){
        for( j = 0; j < DIMC ; j++){
            printf("%4d",(*(m+i))[j]);
        }
        printf("\n");
    }
}

int main(void){
    srand(time(NULL));
    int i, j, mat[DIMR][DIMC];

    for( i = 0; i < DIMR; i++){
        for( j = 0; j < DIMC ; j++){
            mat[i][j] = rand() % 21 -10;
            printf("%4d", mat[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    stampa_mat(mat, DIMR);
    printf("\n");
    azzera_mat(mat, DIMR);
    stampa_mat(mat, DIMR);
}